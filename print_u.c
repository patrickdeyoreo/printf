#include "holberton.h"


/**
 * _print_u - print an unsigned integer (helper function)
 * @n: the integer to print
 * @count: a pointer to a counter for the number of bytes printed
 */
void _print_u(unsigned int n, int *count)
{
	if (n > 9)
		_print_i(n / 10, count);
	*count += _putchar('0' + n % 10);
}


/**
 * print_u - print an unsigned integer
 * @args: the va_list with the integer to print as it's next element
 *
 * Return: the number of bytes printed
 */
int print_u(va_list args)
{
	int count = 0;

	_print_u(va_arg(args, int), &count);

	return (count);
}
