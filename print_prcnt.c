#include "holberton.h"

/**
 * print_prcnt - print a percent character
 * @args: the va_list
 *
 * Return: the number of bytes printed
 */
int print_prcnt(t_buf *buffer, va_list args __attribute__((unused)))
{
	return (bputchar(buffer, '%'));
}
