#include "holberton.h"

/**
 * _printf - print arguments according to a format
 * @format: a string composed of ordinary characters and format specifications
 *
 * Return: Upon success, this returns the number of characters printed.
 * If an output error is encountered, -1 is returned instead.
 */
int _printf(const char *format, ...)
{
	va_list arguments;
	int (*print_func)(va_list);
	int charCounter, lastRetVal;

	if (!format)
		return (-1);

	va_start(arguments, format);
	for (charCounter = 0; *format; ++format)
	{
		if (*format == '%')
		{
			if (!format[1])
				continue;

			print_func = get_print_func(format[1]);
			if (print_func)
			{
				lastRetVal = print_func(arguments);
				if (lastRetVal < 0)
					return (-1);
				charCounter += lastRetVal;
				++format;
				continue;
			}
			lastRetVal = _putchar(*format++);
			if (lastRetVal < 0)
				return (-1);
			charCounter += lastRetVal;
		}
		lastRetVal = _putchar(*format);
		if (lastRetVal < 0)
			return (-1);
		charCounter += lastRetVal;
	}
	va_end(arguments);
	return (charCounter);
}
