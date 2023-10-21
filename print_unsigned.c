#include "main.h"

/**
 *print_unsigned - print unsigned integers
 *@unsign: numbers
 *
 *Return: unsigned integer
 */

int print_unsigned(va_list unsign)
{
	unsigned int num;
	int i;

	num = va_arg(unsign, unsigned int);

	if (num == 0)
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
