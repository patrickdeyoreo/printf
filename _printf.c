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
	t_print_func specs[] = {
		{'c', print_c},
		{'s', print_s},
		{'%', print_prcnt},
		{'\0', NULL}
	};
	va_list arguments;
	int i, charCounter;

	va_start(arguments, format);
	while (*format)
	{
		if (*format != '%')
		{
			charCounter += _putchar(*format);
		}
		else
		{
			/*
			print_func = get_print_func(*(++format));
			if (print_func)
				charCounter += print_func(arguments);
			else
				return (charCounter);
			*/
			for (i = 0, format += 1; specs[i].specifier; i++)
			{
				if (specs[i].specifier == *format)
				{
					charCounter += specs[i].f(arguments);
					break;
				}
			}
		}
		format++;
	}
	va_end(arguments);
	return (charCounter);
}
