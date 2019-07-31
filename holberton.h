#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct buf - facilitate buffered I/O
 * @buf: the start of the buffer
 * @pos: the offset of the next byte
 * @size: the size of the buffer
 */
typedef struct buf
{
	char *buf;
	int pos;
	int size;
} t_buf;

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

int print_c(t_buf *buffer, va_list);

int print_s(t_buf *buffer, va_list);

int print_prcnt(t_buf *buffer, va_list);

int print_i(t_buf *buffer, va_list);
void _print_i(t_buf *buffer, int n, int *count);

int print_b(t_buf *buffer, va_list);
void _print_b(t_buf *buffer, unsigned int n, int *count);

int print_u(t_buf *buffer, va_list);
void _print_u(t_buf *buffer, unsigned int n, int *count);

int print_o(t_buf *buffer, va_list);
void _print_o(t_buf *buffer, unsigned int n, int *count);

int print_x(t_buf *buffer, va_list);
void _print_x(t_buf *buffer, unsigned int n, int *count);

int print_X(t_buf *buffer, va_list);
void _print_X(t_buf *buffer, unsigned int n, int *count);

int print_S(t_buf *buffer, va_list args);

int print_p(t_buf *buffer, va_list);
void _print_p(t_buf *buffer, unsigned long int n, int *count);

int print_rev(t_buf *buffer, va_list);
void _print_rev(t_buf *buffer, char *s, int *count);

int print_rot13(t_buf *buffer, va_list);

int _putchar(int c);

int binit(t_buf *buffer, int size);
void bfree(t_buf *buffer);

int bwrite(t_buf *buffer, const char *src, int count);
int bflush(int fd, t_buf *buffer);
int bputchar(t_buf *buffer, int c);

void _memset(char *s, int c, unsigned int n);

#endif /* HOLBERTON_H */
