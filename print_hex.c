#include "main.h"

/**
 *print_hex - print hexadecimal in lowercase
 *@hexa: name
 *
 *Return: integer
 */

int print_hex(va_list hexa)
{
	int num, i;

	num = va_arg(hexa, int);

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
				digits[index++] = remainder - 10 + 'a';
			num /= 16;
		}
		for (i = index - 1; i >= 0; i--)
			_putchar(digits[i]);
	}
	_putchar('\n');
	return (1);
}
