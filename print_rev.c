#include "main.h"
/**
 * print_rev - print a reversed string
 *
 * @list: the list of arguments
 *
 * Return: value
 */
int print_rev(va_list list)
{
	char *string;
	int len, c;

	string = va_arg(list, char *);
	for (len = 0; *string != '\0'; string++)
	{
		++len;
	}
	string--;
	for (c = len; c > 0; c--)
	{
		_putchar(*string);
		string--;
	}
}
