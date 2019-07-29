#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;
	int testy;
	unsigned int ui = (unsigned int) INT_MAX + 1024;
	int i = printf("%%%");

	len  = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	testy = _printf("%r and Sudeep!\n", "Sudeep");

	_printf("Length:[%d, %i]\n", testy, testy);

	_printf("Length:[%d, %i]\n", len);
	printf("Length:[%d, %i]\n", len2, len2);

	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);

	_printf("Unsigned:[%u]\n", ui);
	printf("Unsigned:[%u]\n", ui);

	_printf("Unsigned binary:[%b]\n", ui);

	_printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned octal:[%o]\n", ui);

	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);

	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');

	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");

	/*
	 * _printf("Address:[%p]\n", addr);
	 * printf("Address:[%p]\n", addr);
	 */

	len  = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");

	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);

	/*printf(".%r\n");*/
	printf("%%% , number of chars printed: [%i]\n", i);
        printf("%%%\n");
	return (0);
}
