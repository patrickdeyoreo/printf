#include "holberton.h"

/**
 * print_S - print a string, outputting non-printable characters in hex
 * @args: the va_list with the string to print as the next element
 *
 * Return: the number of bytes printed
 */
int print_S(va_list args)
{
	int count, lastRetVal;
	unsigned char *str = va_arg(args, char *);

	if (!str)
		return (_printf("(null)"));

	for (count = 0; *str; ++str)
	{
		if (*str < 0x20 || 0x80 <= *str)
		{
			lastRetVal = _printf("\\x");
			if (lastRetVal < 0)
				return (-1);

			_print_X(*str, &count);
			if (count < 0)
				return (-1);
		}
		else
		{
			lastRetVal = _putchar(*str);
			if (lastRetVal < 0)
				return (-1);
		}
		count += lastRetVal;
	}

	return (count);
}
