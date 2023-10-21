#include "main.h"

/**
 *print_char - print characters
 *@val: character
 *
 *Return: char
 */

int print_char(va_list val)
{
	char c;

	c = va_arg(val, int);
	_putchar(c);
	return (1);
}
