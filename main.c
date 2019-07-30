#include <limits.h>
#include <stdarg.h>
#include <stdio.h>
#include "holberton.h"


/**
 * struct test - a test for printf
 * @format: format string
 * @args: args as bytes
 */
typedef struct test
{
	const char *format;
	const char *args;
} test_t;


/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char **test, *test_list[]  = {
		"%",   "%%",   "%%%",
		"%&",  "%%&",  "%%%&",
		"&%",  "&%%",  "&%%%",
		"&%&", "&%%&", "&%%%&",
		NULL
	};
	int len, len2;
	unsigned int ui = (unsigned int) INT_MAX + 1024;
	const void *ptr = (void *) 0x7ffe637541f0;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);

	puts("---------+--");
	for (test = test_list; *test; ++test)
	{
		printf("@ format : %s\n", *test);
		_printf("> _printf: ");
		len = _printf(*test);
		puts("");
		printf("> printf : ");
		len2 = printf(*test);
		puts("");
		printf("+ _printf:%2d\n", len);
		printf("+ printf :%2d\n", len2);
		puts("---------+--");
	}

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

	 _printf("Address:[%p]\n", ptr);
	 printf("Address:[%p]\n", ptr);

	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");

	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);

	/*
	 * _printf("Unknown:[%r]\n");
	 * printf("Unknown:[%r]\n");
	 */

	return (0);
}
