#include "holberton.h"

/**
 * _printf - take format string and print each arg
 * according to specs encountered
 *
 * @format: string with literals and directives
 * Return: Number of characters printed
 *
 */
int _printf(const char *format, ...)
{
	va_list arguments;
	int (*print_func)(va_list);
	int charCounter, lastRetVal;

	va_start(arguments, format);
	for (charCounter = 0; *format; ++format)
	{
		if (*format == '%')
		{
			print_func = get_print_func(format[1]);
			if (print_func)
			{
				lastRetVal = print_func(arguments);
				if (lastRetVal < 0)
					return (lastRetVal);
				charCounter += lastRetVal;
				++format;
				continue;
			}
		}
		lastRetVal += _putchar(*format);
		if (lastRetVal < 0)
			return (lastRetVal);
		charCounter += lastRetVal;
	}
	va_end(arguments);
	return (charCounter);
}
