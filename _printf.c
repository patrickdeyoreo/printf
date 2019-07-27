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
	t_print_func specs[] = {
		{"c", print_c},
		{"s", print_s},
		{"%", print_prcnt},
		{NULL, NULL}
	};
	va_list arguments;
	int i, charCounter;

	va_start(arguments, format);
	while (*format)
	{
		if (*format != '%')
		{
			_putchar(*format);
			charCounter++;
			format++;
		}
		else
		{
			i = 0;
			while (specs[i].spec)
			{
				if (*(specs[i]).spec == *(format++))
					charCounter += specs[i].f(arguments);
				i++;
			}
		}
	}
	va_end(arguments);
	return (charCounter);
}
