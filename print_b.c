#include "holberton.h"


/**
 * _print_b - print an integer in binary (helper function)
 * @n: the integer to print
 * @count: a pointer to a counter for the number of bytes printed
 */
void _print_b(t_buf *buffer, unsigned int n, int *count)
{
	int lastRetVal;

	if (n > 1)
		_print_b(buffer, n >> 1, count);

	if (*count < 0)
		return;

	lastRetVal = bputchar(buffer, '0' + n % 2);

	if (lastRetVal < 0)
		*count = (-1);
	else
		*count += lastRetVal;
}


/**
 * print_b - print an integer in binary
 * @args: the va_list with the integer to print as it's next element
 *
 * Return: the number of bytes printed
 */
int print_b(t_buf *buffer, va_list args)
{
	int count = 0;

	_print_b(buffer, va_arg(args, int), &count);

	return (count);
}
