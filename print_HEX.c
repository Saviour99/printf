#include "main.h"

/**
 *print_HEX - print hexadecimal in uppercase
 *@HEXA: name
 *
 *Return: integer
 */

int print_HEX(va_list HEXA)
{
	int num, i;

	num = va_arg(HEXA, int);

	if (num == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		char digits[sizeof(int) * 10];
		int index = 0;

		while (num > 0)
		{
			int remainder = num % 16;

			if (remainder < 10)
			{
				digits[index++] = remainder + '0';
			}
			else
				digits[index++] = remainder - 10 + 'A';
			num /= 16;
		}
		for (i = index - 1; i >= 0; i--)
			_putchar(digits[i]);
	}
	_putchar('\n');
	return (1);
}
