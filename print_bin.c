#include "main.h"

/**
 *print_bin - print bin numbers
 *@binary: numbers
 *
 *Return: binary
 */

int print_bin(va_list binary)
{
	unsigned int num;
	int i;

	num = va_arg(binary, unsigned int);

	if (num == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		unsigned int digits[sizeof(unsigned int) * 8];
		int index = 0;

		while (num > 0)
		{
			digits[index++] = num % 2;
			num /= 2;
		}
		for (i = index - 1; i >= 0; i--)
			_putchar(digits[i] + '0');
	}
	_putchar('\n');
	return (1);
}
