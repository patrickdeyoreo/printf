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
	int last_ret_val;

	va_start(arguments, format);
	for (charCounter = 0; *format; ++format)
	{
		if (*format == '%')
		{
			print_func = get_print_func(format[1]);
			if (print_func)
			{
				last_ret_val = print_func(arguments);
				if (last_ret_val < 0)
					return (last_ret_val);
				charCounter += last_ret_val;
				++format;
				continue;
			}
		}
		charCounter += _putchar(*format);
	}
	va_end(arguments);
	return (charCounter);
}
