#include "holberton.h"

/**
 * get_print_func - find print function relative to matching specifier
 *
 * @c: current specifier to compare
 * Return: Number of characters printed
 *
 */
int (*get_print_func(char c))(va_list)
{
	t_print_func specs[] = {
		{'c', print_c},
		{'s', print_s},
		{'%', print_prcnt},
		{'i', print_i},
		{'d', print_i},
		{'b', print_b},
		{'\0', NULL}
	};
	int i;

	i = 0;
	while (specs[i].specifier)
	{
		if (specs[i].specifier == c)
			return (specs[i].f);
		i++;
	}
	return (NULL);
}
