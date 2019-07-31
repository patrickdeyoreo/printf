#include "holberton.h"

/**
 * _print_rev - print a string in reverse
 * @s: the string to print
 * @count: a pointer to a counter for the number of bytes printed
 */
void _print_rev(t_buf *buffer, char *s, int *count)
{
	if (!(*s))
		return;
	_print_rev(buffer, s + 1, count);
	*count += bputchar(buffer, *s);
}

/**
 * print_rev - print a string in reverse
 * @args: the va_list with the character to print as it's next element
 *
 * Return: the number of bytes printed
 */
int print_rev(t_buf *buffer, va_list args)
{
	int count = 0;

	_print_rev(buffer, va_arg(args, char *), &count);

	return (count);
}
