#include "holberton.h"

int print_c(va_list args)
{
	return (_putchar(va_arg(args, int)));
}
