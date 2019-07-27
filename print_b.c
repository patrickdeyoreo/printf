#include "holberton.h"


/**
 * _print_b - print an integer in binary (helper function)
 * @n: the integer to print
 * @count: a pointer to a counter for the number of bytes printed
 */
void _print_b(unsigned int n, int *count)
{
	if (n > 2)
		_print_b(n / 2, count);
	*count += _putchar('0' + n % 2);
}


/**
 * print_b - print an integer in binary
 * @args: the va_list with the integer to print as it's next element
 *
 * Return: the number of bytes printed
 */
int print_b(va_list args)
{
	int count = 0;

	_print_b(va_arg(args, int), &count);

	return (count);
}
