Qparse C++ SQL Parser
=====================

This is a SQL Parser for C++ based on the [Hyrise SQL Parser](https://github.com/hyrise/sql-parser). It parses the given SQL query into C++ objects.

There are two goals behind this fork:
(1) to develop additional ANSI SQL features that were not found in the original `sql-parser` with the hopes of contributing them upstream, and
(2) Supporting [Qserv](https://github.com/lsst/qserv)'s mySQL dialect (probably won't be upstreamed).

### Changes that could be upstreamed

The following could likely be upstreamed as they aren't specific to any particular SQL dialect:

* **H01**: Three-part qualifier: `schema.table.column`
* **H02**: Unquoted identifiers may start with `_` (`_foo` was previously rejected since the grammar only allowed a leading letter).
* **H03**: Repeated/trailing statement-separator semicolons are allowed (e.g. `SELECT 1;;`).
* **H04**: `HAVING` is supported without a `GROUP BY` clause (`SelectStatement::having`)
* **H05**: `NATURAL LEFT/RIGHT/FULL [OUTER] JOIN` is parsed, see `JoinDefinition::natural` flag
* **H06**: Integers outside `int64_t` range are preserved as their original text via a new `kExprLiteralIntString` expression type (`Expr::makeLiteralIntString`).
* **H07**: Floats preserve their original text instead of lossy conversion via `atof`, avoiding round-trip issues for long decimals.
* **H08**: Scientific notation (`1e10`, `1.5e-3`) and leading/trailing-dot forms (`.5`, `5.`) are recognized. Based on upstream PR [hyrise/sql-parser#234](https://github.com/hyrise/sql-parser/pull/234)
* **H09**: `NOT BETWEEN` expressions are supported.
* **H10**: Fixed memory leak in `SQLParser::tokenize()`. Based on upstream issue [hyrise/sql-parser#261](https://github.com/hyrise/sql-parser/issues/261)
* **H11**: Lexer errors, including unknown characters and unterminated quoted strings, invalidate parsing and make `SQLParser::tokenize()` return `false`.

### Qserv / MySQL dialect-specific changes

These intentionally diverge from ANSI SQL (and from upstream Hyrise's parsing behavior) to match MySQL syntax that Qserv relies on. They are not drop-in compatible with standard SQL:

* **Q01**: Backtick-quoted identifiers (`` `mytable` ``)
* **Q02**: Double-quoted strings are interpreted as string literals, not identifiers. `"foo"` parses as a `STRING` (with `\"`, `\'`, `""`, and `\\` escape handling). (Qserv has `ANSI_QUOTES` turned off).
* **Q03**: `||` means logical OR and `&&` means logical AND (MySQL style), rather than `||` being the ANSI SQL string-concatenation operator. Use `CONCAT(a, b)` for concatenation.
* **Q04**: MySQL-style bitwise operators: `&` (AND), `|` (OR), `^` (XOR), `<<`/`>>` (shift), with MySQL-like operator precedence.
* **Q05**: `<=>` NULL-safe equality operator (`kOpNullSafeEquals`).
* **Q06**: `MOD` and `DIV` keyword operators for integer modulo/division, alongside the existing `%` and `/`.
* **Q07**: `CROSS JOIN ... ON <condition>` is accepted, even though a cross join takes no join condition in ANSI SQL.
* **Q08**: Conditionless `JOIN`, `INNER JOIN`, and `CROSS JOIN` are accepted without `ON` or `USING`. This supports queries that place the join predicate in `WHERE`.
* **Q09**: `OFFSET` can be used as an unquoted column name (qserv-specific workaround)
