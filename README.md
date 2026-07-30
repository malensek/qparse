C++ SQL Parser
=========================

This is a SQL Parser for C++ based on the [Hyrise SQL Parser](https://github.com/hyrise/sql-parser). It parses the given SQL query into C++ objects.

The reasons for this fork are twofold:
(1) to develop additional ANSI SQL features that were not found in the original `sql-parser` with the hopes of contributing them upstream, and
(2) Supporting [Qserv](https://github.com/lsst/qserv)'s mySQL dialect (probably won't be upstreamed).

### Changes that could be upstreamed

The following could likely be upstreamed as they aren't specific to any particular SQL dialect:

* Three-part qualifiers: `schema.table.column` and `schema.table.*`
* Unquoted identifiers may start with `_` (`_foo` was previously rejected since the grammar only allowed a leading letter).
* `HAVING` is supported without a `GROUP BY` clause (`SelectStatement::having`)
* `NATURAL LEFT/RIGHT/FULL [OUTER] JOIN` is now parsed, with a new `JoinDefinition::natural` flag

* Out-of-range integer literals no longer error out. Integers outside `int64_t` range (e.g. `9223372036854775808`) used to trigger a lexer error; they're now preserved as their original text via a new `kExprLiteralIntString` expression type (`Expr::makeLiteralIntString`), the same way oversized values are already handled elsewhere.
* Float literals preserve their original text instead of being lossily converted through `atof`/`double` (`kExprLiteralFloatString` alongside the existing `kExprLiteralFloat`), avoiding precision/round-trip issues for long decimals.
* Broader numeric literal syntax: scientific notation (`1e10`, `1.5e-3`) and leading/trailing-dot forms (`.5`, `5.`) are now recognized.
* Repeated/trailing statement-separator semicolons are now tolerated (e.g. `SELECT 1;;`).
* Fixed a memory leak in `SQLParser::tokenize()`: the first token's allocated string was never freed (the free-check ran one token too late), and `SQL_BIGINTVAL`/`SQL_FLOATVAL` tokens were missing from the free-check entirely, leaking their strings on every occurrence.

### Qserv / MySQL dialect-specific changes

These intentionally diverge from ANSI SQL (and from upstream Hyrise's parsing behavior) to match MySQL syntax that Qserv relies on. They are not drop-in compatible with standard SQL:

* Backtick-quoted identifiers (`` `mytable` ``)
* Double-quoted strings are interpreted as string literals, not identifiers. `"foo"` now parses as a `STRING` (with `\"`, `\'`, `""`, and `\\` escape handling). (Qserv has `ANSI_QUOTES` turned off).
* `||` means logical OR and `&&` means logical AND (MySQL style), rather than `||` being the ANSI SQL string-concatenation operator. Use `CONCAT(a, b)` for concatenation.
* MySQL-style bitwise operators: `&` (AND), `|` (OR), `^` (XOR), `<<`/`>>` (shift), with MySQL-like operator precedence.
* `<=>` NULL-safe equality operator (`kOpNullSafeEquals`).
* `MOD` and `DIV` keyword operators for integer modulo/division, alongside the existing `%` and `/`.
* `CROSS JOIN ... ON <condition>` is accepted, even though a cross join takes no join condition in ANSI SQL.
* `OFFSET` can be used as an unquoted column name — a targeted workaround for a specific Qserv query pattern, not general keyword-as-identifier support.

