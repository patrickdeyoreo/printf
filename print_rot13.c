#include "holberton.h"

/**
 * print_rot13 - print a string encoded in rot13
 * @args: the va_list with the string to print as the next element
 *
 * Return: the number of bytes printed
 */
int print_rot13(va_list args)
{
	int count = 0, i, j;
	char set[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char enc[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *s = va_arg(args, char *);

	for (i = 0; s[i] != 0; i++)
	{
		for (j = 0; set[j] != 0; j++)
			if (s[i] == set[j])
			{
				count += _putchar(enc[j]);
				break;
			}
	}
	return (count);
}
