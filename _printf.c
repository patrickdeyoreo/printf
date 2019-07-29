#include "holberton.h"

/**
 * _printf - print data to stdout
 *@format: string with literals and directives
 *
 * Return: Number of characters printed
 *
 */
int _printf(const char *format, ...)
{
	int (*print_func)(va_list);
	va_list arguments;
	int charCounter;

	va_start(arguments, format);
	charCounter = 0;
	while (*format)
	{
		if (*format != '%')
		{
			charCounter += _putchar(*format);
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
