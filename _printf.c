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
	int (*print_func)(t_buf *, va_list);
	int charCounter = 0;
	int lastRetVal;
	t_buf buffer;

	if (!format)
		return (-1);

	binit(&buffer, 1024);
	va_start(arguments, format);
	while (*format)
	{
		if (*format == '%')
		{
			if (!format[1])
				return (-1);

			print_func = get_print_func(format[1]);
			if (print_func)
			{
				lastRetVal = print_func(&buffer, arguments);
				if (lastRetVal < 0)
					return (-1);
				charCounter += lastRetVal;
				format += 2;
				continue;
			}
			if (bputchar(&buffer, *format++) < 0)
				return (-1);
			++charCounter;
		}
		if (bputchar(&buffer, *format++) < 0)
			return (-1);
		++charCounter;
	}
	va_end(arguments);
	bflush(1, &buffer);
	bfree(&buffer);

	return (charCounter);
}
