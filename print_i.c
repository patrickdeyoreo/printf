#include "holberton.h"


/**
 * _print_i - print an integer (helper function)
 * @n: the integer to print
 * @count: a pointer to a counter for the number of bytes printed
 */
void _print_i(int n, int *count)
{
	if (n > -1)
	{
		if (n > 9)
			_print_i(n / 10, count);
		*count += _putchar('0' + n % 10);
	}
	else
	{
		*count += _putchar('-');
		if (n < -9)
			_print_i(n / -10, count);
		*count += _putchar('0' - n % 10);
	}
}


/**
 * print_i - print an integer
 * @args: the va_list with the integer to print as it's next element
 *
 * Return: the number of bytes printed
 */
int print_i(va_list args)
{
	int count = 0;

	_print_i(va_arg(args, int), &count);

	return (count);
}
