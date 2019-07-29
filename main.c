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
	unsigned int ui = (unsigned int) INT_MAX + 1024;

	len  = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");

	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);

	printf("- - - - -\n");
	printf(">> format: %s\n", "%");
	printf("* _printf()\n");
	_printf("%");
	printf("\n");
	printf("* printf()\n");
	printf("%");
	printf("\n");
	printf("- - - - -\n");
	printf(">> format: %s\n", "%\\n");
	printf("* _printf()\n");
	_printf("%\n");
	printf("* printf()\n");
	printf("%\n");
	printf("- - - - -\n");
	printf(">> format: %s\n", "%%%");
	printf("* _printf()\n");
	_printf("%%%");
	printf("\n");
	printf("* printf()\n");
	printf("%%%");
	printf("\n");
	printf("- - - - -\n");
	printf(">> format: %s\n", "%%%\\n");
	printf("* _printf()\n");
	_printf("%%%\n");
	printf("* printf()\n");
	printf("%%%\n");
	printf("- - - - -\n");
	printf(">> format: %s\n", "%%%@");
	printf("* _printf()\n");
	_printf("%%%@");
	printf("\n");
	printf("* printf()\n");
	printf("%%%@");
	printf("\n");
	printf("- - - - -\n");
	printf(">> format: %s\n", "%%%@\\n");
	printf("* _printf()\n");
	_printf("%%%@\n");
	printf("* printf()\n");
	printf("%%%@\n");
	printf("- - - - -\n");
	printf(">> format: %s\n", "%%%@%");
	printf("* _printf()\n");
	_printf("%%%@%");
	printf("\n");
	printf("* printf()\n");
	printf("%%%@%");
	printf("\n");
	printf("- - - - -\n");
	printf(">> format: %s\n", "%%%@%\\n");
	printf("* _printf()\n");
	_printf("%%%@%\n");
	printf("* printf()\n");
	printf("%%%@%\n");
	printf("- - - - -\n");
	printf(">> format: %s\n", "%%%@%%%");
	printf("* _printf()\n");
	_printf("%%%@%%%");
	printf("\n");
	printf("* printf()\n");
	printf("%%%@%%%");
	printf("\n");
	printf("- - - - -\n");
	printf(">> format: %s\n", "%%%@%%%\\n");
	printf("* _printf()\n");
	_printf("%%%@%%%\n");
	printf("* printf()\n");
	printf("%%%@%%%\n");
	printf("- - - - -\n");
	printf(">> format: %s\n", "%%%@%@%%%");
	printf("* _printf()\n");
	_printf("%%%@%@%%%");
	printf("\n");
	printf("* printf()\n");
	printf("%%%@%@%%%");
	printf("\n");
	printf("- - - - -\n");
	printf(">> format: %s\n", "%%%@%@%%%\\n");
	printf("* _printf()\n");
	_printf("%%%@%@%%%\n");
	printf("* printf()\n");
	printf("%%%@%@%%%\n");
	printf("- - - - -\n");

	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);

	_printf("Undefined int   :[%Q]\n", 762534);
	printf("Undefined int   :[%Q]\n", 762534);
	_printf("Undefined char  :[%Q]\n", 'A');
	printf("Undefined char  :[%Q]\n", 'A');
	_printf("Undefined string:[%Q]\n", "Hello");
	printf("Undefined string:[%Q]\n", "Hello");

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

	/*
	 * _printf("Unknown:[%r]\n");
	 * printf("Unknown:[%r]\n");
	 */

	return (0);
}
