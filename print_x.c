#include "holberton.h"


/**
 * _print_x - print an integer in hexadecimal (lowercase) (helper function)
 * @n: the integer to print
 * @count: a pointer to a counter for the number of bytes printed
 */
void _print_x(unsigned int n, int *count)
{
	if (n > 0xf)
		_print_x(n >> 4, count);
	if ((n & 0xf) < 0xa)
		*count += _putchar('0' + (n & 0xf));
	else
		*count += _putchar('a' + (n & 0xf) % 0xa);
}


/**
 * print_x - print an integer in hexadecimal (lowercase)
 * @args: the va_list with the integer to print as it's next element
 *
 * Return: the number of bytes printed
 */
int print_x(va_list args)
{
	int count = 0;

	_print_x(va_arg(args, int), &count);

	return (count);
}

