# _printf
This is a working printf clone called "_printf". It takes a format string
(that can include 0 or more directives) and writes it to the standard output
stream. The function returns the number of characters printed.
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
## Example Test
```
 int main(void)
 {
    int len;

    len = _printf("Let's try to printf a simple sentence.\n");
    _printf("Length:[%d, %i]\n", len, len);
    _printf("Negative:[%d]\n", -762534);
 }
```
## References
* [Manual Page 3 for printf](https://linux.die.net/man/3/printf)
* [Secrets of "printf"](https://www.cypress.com/file/54761/download)