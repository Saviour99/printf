#include "main.h"

/**
 *print_rot13 - print rot 13 of a string
 *@encode: name of the string
 *
 *Return: 1
 */

int print_rot13(va_list encode)
{
	char *str;
	int i = 0;

	str = va_arg(encode, char *);

	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (str[i] >= 'A' && str[i] <= 'M')
				_putchar(str[i] + 13);
			else
				_putchar(str[i] - 13);
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i] >= 'a' && str[i] <= 'm')
				_putchar(str[i] + 13);
			else
				_putchar(str[i] - 13);
		}
		else
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
	return (1);
}
