#include "main.h"

/**
 *print_hex_ex - print hexadecimal in lowercase
 *@num: name
 *
 *Return: integer
 */

int print_hex_ex(unsigned long int num)
{
	long int i;

	if (num == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		char digits[sizeof(unsigned long int) * 10];
		long int index = 0;

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
