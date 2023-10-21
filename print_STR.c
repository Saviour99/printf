#include "main.h"

/**
 *print_STR - prints a STRING
 *@str: name of the STRING
 *
 *Return: 1
 */

int print_STR(va_list str)
{
	char *ptr;
	int i = 0;

	ptr = va_arg(str, char *);

	while (ptr[i] != '\0')
	{
		if (ptr[i] >= 32 && ptr[i] < 127)
			_putchar(ptr[i]);
		else
		{
			_putchar('\\');
			_putchar('x');
			_putchar("0123456789ABCDEF"[(ptr[i] >> 4) & 0xF]);
			_putchar("0123456789ABCDEF"[ptr[i] & 0xF]);
		}
		i++;
	}
	_putchar('\n');
	return (1);
}
