#include "holberton.h"


/**
 * _print_p - print an adress in hexadecimal (lowercase) (helper function)
 * @n: the integer to print
 * @count: a pointer to a counter for the number of bytes printed
 */
void _print_p(t_buf *buffer, unsigned long int n, int *count)
{
	int lastRetVal;

	if (n > 0xf)
		_print_p(buffer, n >> 4, count);

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
 * print_p - print an address in hexadecimal (lowercase)
 * @args: the va_list with the integer to print as it's next element
 *
 * Return: the number of bytes printed
 */
int print_p(t_buf *buffer, va_list args)
{
	int count;
	void *p = va_arg(args, void *);

	if (!p)
		return (bwrite(buffer, "(nil)", 5));

	count = bwrite(buffer, "0x", 2);
	if (count < 0)
		return (-1);

	_print_p(buffer, (unsigned long int) p, &count);
	return (count);
}
