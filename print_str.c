#include "main.h"

/**
 *print_str - print a string
 *@string: string
 *
 *Return: string
 */

int print_str(va_list string)
{
	char *str;
	int i, len = 1;

	str = va_arg(string, char *);

	for (i = 0; str[i] != '\0'; i++)
		len++;
	for (i = 0; i < len; i++)
		_putchar(str[i]);
	return (len);
}


/**
 *_strlen - print the lenght of  a string
 *@str: string
 *
 *Return: lenght of a string
 */

int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (1);
}
