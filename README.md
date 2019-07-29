# _printf
This is a working printf customized clone called "_printf". It takes a format string
(that can include 0 or more directives) and writes it to the standard output
stream. The function returns the number of characters printed.

## Synopsis
**int _printf(const char *format, ...)**

## Current Conversion Specifiers
| Specifier | Description |
| --------  | ----------- |
| %c | writes a single character |
| %s | writes a character string |
| %% | writes the literal % |
| %d | writes the decimal form a signed integer |
| %i | writes the decimal form a signed integer |
| %u | writes the decimal form of an unsigned integer |
| %b | writes the binary form of an unsigned integer |
| %o | writes the octal form of an unsigned integer |
| %x | writes the hexadecimal form of an unsigned integer (using conversion letters: abcdef) |
| %X | writes the hexadecimal form of an unsigned integer (using conversion letters: ABCDEF) |
| %r |  writes a character string in reverse order |
| %R | encodes a character string in rot13 format |

## Functions
* **get_print_func.c**
> Gives the appropriate print function if passed a valid specifier
* **_putchar.c**
> writes a character to stdout and returns an integer that is used by _printf to accumulate how many characters have been printed
* **print_*.c**
> A group of functions that take care of the relative specifier conversion

## Compilation
```
$ gcc -Wall -Werror -Wextra -pedantic *.c
```

## Example Test
```
 int main(void)
 {
    #include "holberton.h"

    char c = 'C';
    char *str = "Hello";
    int num = 5;

    /* "Print the character c" */
    _printf("Print the character %c", c);

    /* "Print the string Hello" */
    _printf("Print the string %s", str);

    /* "Print a % sign" */
    _printf("Print a %% sign");

    /* "Print the number 5 since number 5 is great" */
    _printf("Print the number %i since number %d is great", num, num);
 }
```
## References
* [Manual Page 3 for printf](https://linux.die.net/man/3/printf)
* [Secrets of "printf"](https://www.cypress.com/file/54761/download)