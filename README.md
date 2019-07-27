# _printf
This is a working printf clone called "_printf". It takes a format string
(that can include 0 or more directives) and writes it to the standard output
stream. The function returns the number of characters printed.
## Current Conversion Specifiers
| Specifier | Description |
| --------  | ----------- |
| %c | character |
| %s | a string of characters |
| %% | % character exclusively |
| %d | signed decimal numbers (base 10 integers) |
| %i | signed integers (base 10) |
| %b | binary conversion of an unsigned integer |
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