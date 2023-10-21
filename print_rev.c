#include "main.h"

/**
 *print_rev - print a string in reverse
 *@reverse: name of string
 *
 *Return: 1
 */

int print_rev(va_list reverse)
{
	char *str;
	int i, len = 0;

	str = va_arg(reverse, char *);

	for (i = 0; str[i] != 0; i++)
		len++;
	for (i = len - 1; i >= 0; i--)
		_putchar(str[i]);
	return (1);
}
