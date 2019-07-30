#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <stdio.h>

/**
 * struct print_func - map a print function to a conversion specifier
 * @specifier: the conversion specifier
 * @f: the function to call to format and print output
 */
typedef struct print_func
{
	char specifier;
	int (*f)(va_list);
} t_print_func;

int _printf(const char *format, ...);

int (*get_print_func(char c))(va_list);

int print_c(va_list);

int print_s(va_list);

int print_prcnt(va_list);

int print_i(va_list);
void _print_i(int n, int *count);

int print_b(va_list);
void _print_b(unsigned int n, int *count);

int print_u(va_list);
void _print_u(unsigned int n, int *count);

int print_o(va_list);
void _print_o(unsigned int n, int *count);

int print_x(va_list);
void _print_x(unsigned int n, int *count);

int print_X(va_list);
void _print_X(unsigned int n, int *count);

int print_S(va_list args);

int print_p(va_list);
void _print_p(unsigned long int n, int *count);

int print_rev(va_list);
void _print_rev(char *s, int *count);

int print_rot13(va_list);

int _putchar(int c);

#endif /* HOLBERTON_H */
