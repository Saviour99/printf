#include "main.h"

/**
 *_putchar - pintf characters
 *@c: characters
 *
 *Return: char
 */

char _putchar(char c)
{
	return (write(1, &c, 1));
}
