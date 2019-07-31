#include "holberton.h"


/**
 * _print_X - print an integer in hexadecimal (uppercase) (helper function)
 * @n: the integer to print
 * @count: a pointer to a counter for the number of bytes printed
 */
void _print_X(t_buf *buffer, unsigned int n, int *count)
{
	int lastRetVal;

	if (n > 0xf)
		_print_X(buffer, n >> 4, count);

	if (*count < 0)
		return;

	if ((n & 0xf) < 0xa)
		lastRetVal = bputchar(buffer, '0' + (n & 0xf));
	else
		lastRetVal = bputchar(buffer, 'A' + (n & 0xf) % 0xa);

	if (lastRetVal < 0)
		*count = (-1);
	else
		*count += lastRetVal;
}


/**
 * print_X - print an integer in hexadecimal (uppercase)
 * @args: the va_list with the integer to print as it's next element
 *
 * Return: the number of bytes printed
 */
int print_X(t_buf *buffer, va_list args)
{
	int count = 0;

	_print_X(buffer, va_arg(args, int), &count);

	return (count);
}
