#include "holberton.h"

/**
 * _printf - print arguments according to a format
 * @format: string with literals and directives
 *
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list arguments;
	int (*print_func)(va_list);
	int charCounter;

	va_start(arguments, format);
	for (charCounter = 0; *format; ++format)
	{
		if (*format == '%')
		{
			print_func = get_print_func(format[1]);
			if (print_func)
			{
				charCounter += print_func(arguments);
				++format;
				continue;
			}
			if (!format[1])
				continue;
		}
		charCounter += _putchar(*format);
	}
	va_end(arguments);
	return (charCounter);
}
