#include "main.h"

/**
 *print_pointer - prints a pointer
 *@point: name of the pointer
 *
 *Return: 1
 */

int print_pointer(va_list point)
{
	unsigned long int *ptr, b;
	char *s = "(nil)";
	int i = 0, a;

	ptr = va_arg(point, unsigned long int *);

	if (ptr == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
			_putchar(s[i]);
		return (i);
	}
	b = (unsigned long int)ptr;
	_putchar('0');
	_putchar('x');
	a = print_hex_ex(b);

	_putchar('\n');
	return (a + 2);
}
