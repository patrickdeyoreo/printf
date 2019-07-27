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
	int (*print_func)(va_list);
	va_list arguments;
	int charCounter;

	va_start(arguments, format);
	while (*format)
	{
		if (*format != '%')
		{
			_putchar(*format);
			charCounter++;
		}
		else
		{
			print_func = get_print_func(*(++format));
			if (print_func)
				charCounter += print_func(arguments);
			else
				return (-1);
		}
		format++;
	}
	va_end(arguments);
	return (charCounter);
}
