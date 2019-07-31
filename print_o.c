#include "holberton.h"


/**
 * _print_o - print an integer in octal (helper function)
 * @n: the integer to print
 * @count: a pointer to a counter for the number of bytes printed
 */
void _print_o(t_buf *buffer, unsigned int n, int *count)
{
	int lastRetVal;

	if (n > 07)
		_print_o(buffer, n >> 3, count);

	if (*count < 0)
		return;

	lastRetVal = bputchar(buffer, '0' + (n & 07));

	if (lastRetVal < 0)
		*count = (-1);
	else
		*count += lastRetVal;
}


/**
 * print_o - print an integer in octal
 * @args: the va_list with the integer to print as it's next element
 *
 * Return: the number of bytes printed
 */
int print_o(t_buf *buffer, va_list args)
{
	int count = 0;

	_print_o(buffer, va_arg(args, int), &count);

	return (count);
}

