#include "holberton.h"

/**
 * print_S - print a string, outputting non-printable characters in hex
 * @args: the va_list with the string to print as the next element
 *
 * Return: the number of bytes printed
 */
int print_S(t_buf *buffer, va_list args)
{
	int count, lastRetVal;
	char *str = va_arg(args, char *);

	if (!str)
		str = "(null)";

	for (count = 0; *str; ++str)
	{
		if (*str < 0x20)
		{
			if (bwrite(buffer, "\\x", 2) < 0)
				return (-1);

			if (*str < 0x10 && bputchar(buffer, '0') < 0)
				return (-1);

			_print_X(buffer, *str, &count);
			if (count < 0)
				return (-1);
		}
		else
		{
			lastRetVal = bputchar(buffer, *str);
			if (lastRetVal < 0)
				return (-1);
		}
		count += lastRetVal;
	}
	return (count);
}
