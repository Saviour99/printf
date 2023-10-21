#include "main.h"

/**
 *print_dec - print decimal numbers
 *@decimal: numbers
 *
 *Return: integer
 */

int print_dec(va_list decimal)
{
	int num;
	int i;

	num = va_arg(decimal, int);

	if (num < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (num == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		char digits[10];
		int index = 0;

		while (num > 0)
		{
			digits[index++] = (num % 10) + '0';
			num /= 10;
		}
		for (i = index - 1; i >= 0; i--)
			_putchar(digits[i]);
	}
	_putchar('\n');
	return (1);
}
