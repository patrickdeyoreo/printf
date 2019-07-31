#include "holberton.h"

/**
 * print_s - print a string
 * @args: the va_list with the string to print as the next element
 *
 * Return: the number of bytes printed
 */
int print_s(t_buf *buffer, va_list args)
{
	int count = 0;
	char *s = va_arg(args, char *);

	if (!s)
		s = "(null)";
	while (s[count])
		bputchar(buffer, s[count++]);

	return (count);
}
