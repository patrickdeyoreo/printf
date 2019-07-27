#include "holberton.h"

/**
 * print_s - print a string
 * @args: the va_list with the string to print as the next element
 *
 * Return: the number of bytes printed
 */
int print_s(va_list args)
{
	int count = 0;
	const char * const s = va_arg(args, const char * const);

	if (s)
	{
		while (s[count])
			_putchar(s[count++]);
	}

	return (count);
}
