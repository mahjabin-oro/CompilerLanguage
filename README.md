# A Custom Programming Language: Lexer & Parser with Flex and Bison

A small programming language **designed from scratch**, with its own keywords and syntax, and a working **lexer, parser and interpreter** built with **Flex** and **Bison** in C. It was built for a Compiler Design course.

---

## What the language supports

Programs start with `startcompile` and end with `endcompile`.

| Feature | Syntax in this language |
|---|---|
| Data types | `int`, `intpointint` (real numbers), `letters` (text) |
| Assignment | `a <<- 50;` |
| Arrays | `int dimention roll<7>;` and `roll<0> <<- 1;` |
| Arithmetic | `add`, `sub`, `into`, `div`, `mod`, `power` |
| Built-in functions | `abs`, `fact` (factorial) |
| Increment / decrement | `a up`, `up a`, `a low`, `low a` |
| Comparison | `g`, `l`, `ge`, `le`, `ee`, `ne` |
| Logic | `and`, `or`, `not` |
| If / else-if / else | `whether < … > { } orif < … > { } else { };` |
| Switch / case | `match x : { option 5 : { } finaloption : { } };` |
| For loop | `till < a <<- 1 \|\| a le 10 \|\| a++ > { };` |
| Range loop | `till < range 1 \|\| 5 > { };` |
| While loop | `until < cond > { };` |
| Do-while | `repeat { } until < cond >;` |
| Input / output | `read(x);`, `write(x);`, `/nl/` for a new line |
| Comments | `** single line`, `* multi-line *` |

## Example

```text
startcompile
int a, total <<- 0;
letters course <<- 'Compiler Design';
write(course);
/nl/
till < a <<- 1 || a le 5 || a++ > {
    whether < a ge 3 > {
        write(a);
        /nl/
    };
};
endcompile
```

## What the compiler does

- **Lexical analysis** (`ztwo.l`, Flex): turns source code into tokens such as keywords, identifiers, numbers, strings, operators and comments
- **Parsing and evaluation** (`ztwo.y`, Bison): checks the grammar and runs the program as it parses
- **Symbol table**: tracks declared variables and their types, and reports errors like *"variable already declared"*
- **Clear feedback**: reports each successful declaration or assignment, and prints comments and results, which is useful for teaching and debugging

`zinput.txt` is a full test program that exercises every feature, and `zoutput.txt` shows the compiler's output for it.

## Build & run

```bash
bison -d ztwo.y
flex ztwo.l
gcc ztwo.tab.c lex.yy.c -o compiler
./compiler        # reads zinput.txt, writes zoutput.txt
```

## Tech stack

C · Flex (lexer generator) · Bison (parser generator)
