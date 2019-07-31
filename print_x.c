#include "holberton.h"


/**
 * _print_x - print an integer in hexadecimal (lowercase) (helper function)
 * @n: the integer to print
 * @count: a pointer to a counter for the number of bytes printed
 */
void _print_x(t_buf *buffer, unsigned int n, int *count)
{
	int lastRetVal;

	if (n > 0xf)
		_print_x(buffer, n >> 4, count);

	if (*count < 0)
		return;

	if ((n & 0xf) < 0xa)
		lastRetVal = bputchar(buffer, '0' + (n & 0xf));
	else
		lastRetVal = bputchar(buffer, 'a' + (n & 0xf) % 0xa);

	if (lastRetVal < 0)
		*count = (-1);
	else
		*count += lastRetVal;
}


/**
 * print_x - print an integer in hexadecimal (lowercase)
 * @args: the va_list with the integer to print as it's next element
 *
 * Return: the number of bytes printed
 */
int print_x(t_buf *buffer, va_list args)
{
	int count = 0;

	_print_x(buffer, va_arg(args, int), &count);

	return (count);
}
