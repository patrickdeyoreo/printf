#include <limits.h>
#include <stdarg.h>
#include <stdio.h>
#include "holberton.h"


/**
 * struct test - a test for printf
 * @format: a format string
 * @arg: a pointer to an argument
 */
typedef struct test
{
	const char *format;
	const void *arg;
} test_t;


/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	const void *nil = NULL;
	const char *str = "Yo, wattup?";
	unsigned int ui = INT_MIN;
	int ch = '#', i = INT_MIN;
	int len, len2;

	test_t *t;
	test_t tests[] = {
		{"Print a line\n", NULL},
		{"Percent : %%\n", NULL},
		{"Integer : %d\n", &i  },
		{"Integer : %i\n", &i  },
		{"Unsigned: %u\n", &ui },
		{"Binary .: %b\n", &ui },
		{"Octal ..: %o\n", &ui },
		{"Hex ....: %x\n", &ui },
		{"Hex ....: %X\n", &ui },
		{"Address : %p\n", str },
		{"Address : %p\n", &nil},
		{"Char ...: %c\n", &ch },
		{"String .: %s\n", &str},
		{"Reverse : %r\n", &str},
		{"ROT13 ..: %R\n", &str},
		{NULL}
	};

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);

	for (t = tests; t->format; ++t)
	{
		puts("---------+");
		printf("@ format : %s\n", t->format);
		_printf("> _printf: ");
		if (t->arg)
			len = _printf(t->format, *((void **) t->arg));
		else
			len = _printf(t->format, NULL);
		printf("> printf : ");
		if (t->arg)
			len2 = printf(t->format, *((void **) t->arg));
		else
			len2 = printf(t->format, NULL);
		printf("+ _printf: %d\n", len);
		printf("+ printf : %d\n", len2);
	}
	puts("---------+");

	/*
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);

	_printf("Undefined w/ char   : [%Q]\n", 762534);
	printf("Undefined w/ char   : [%Q]\n", 762534);
	_printf("Undefined w/ char * : [%Q]\n", "Hello");
	printf("Undefined w/ char * : [%Q]\n", "Hello");

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

	_printf("Address:[%p]\n", addr);
	printf("Address:[%p]\n", addr);

	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");

	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);

	 _printf("Unknown:[%r]\n");
	 printf("Unknown:[%r]\n");
	 */

	return (0);
}