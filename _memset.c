#include "holberton.h"

/**
 * _memset - fill memory with a constant byte
 * @s: a pointer to the first byte of target memory area
 * @c: the value to write to each of byte
 * @n: the number of bytes to fill
 */
void _memset(char *s, int c, unsigned int n)
{
	if (s)
	{
		while (n--)
			*s++ = c;
	}
}
