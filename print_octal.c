#include "main.h"

/**
 *print_octal - print octal notation
 *@notation: numbers
 *
 *Return: integer
 */

int print_octal(va_list notation)
{
	int num, i;

	num = va_arg(notation, int);

	if (num == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		char digits[sizeof(int) * 8];
		int index = 0;

		while (num > 0)
		{
			digits[index++] = (num % 8) + '0';
			num /= 8;
		}
		for (i = index - 1; i >= 0; i--)
			_putchar(digits[i]);
	}
	_putchar('\n');
	return (1);
}
