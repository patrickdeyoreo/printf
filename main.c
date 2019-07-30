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
	unsigned int uint = (unsigned int) INT_MAX + 1024;

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

	_printf("Undefined w/ char   : [%Q]\n", 762534);
	printf("Undefined w/ char   : [%Q]\n", 762534);
	_printf("Undefined w/ char * : [%Q]\n", "Hello");
	printf("Undefined w/ char * : [%Q]\n", "Hello");

	_printf("Unsigned:[%u]\n", uint);
	printf("Unsigned:[%u]\n", uint);

	_printf("Unsigned binary:[%b]\n", uint);

	_printf("Unsigned octal:[%o]\n", uint);
	printf("Unsigned octal:[%o]\n", uint);

	_printf("Unsigned hexadecimal:[%x, %X]\n", uint, uint);
	printf("Unsigned hexadecimal:[%x, %X]\n", uint, uint);

	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');

	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");

	/*
	 * _printf("Address:[%p]\n", addr);
	 * printf("Address:[%p]\n", addr);
	 */

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
