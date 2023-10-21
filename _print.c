#include "main.h"

/**
 *_printf - printf
 *@format: args
 *
 *Return: 1
 */

int _printf(const char *format, ...)
{
	match val[] = {
		{"%c", print_char},
		{"%s", print_str},
		{"%%", print_mod},
		{"%d", print_dec},
		{"%i", print_int},
		{"%b", print_bin},
		{"%u", print_unsigned},
		{"%o", print_octal},
		{"%x", print_hex},
		{"%X", print_HEX},
		{"%S", print_STR},
		{"%p", print_pointer},
		{"%r", print_rev},
		{"%R", print_rot13}
	};
	va_list args;
	int i, j, len = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
Here:
	for (i = 0; format[i] != '\0'; i++)
	{
		for (j = 13; j >= 0; j--)
		{
			if (val[j].id[0] == format[i] && val[j].id[1] == format[i + 1])
			{
				len = len + val[j].f(args);
				i += 2;
				goto Here;
			}
		}
		_putchar(format[i]);
		len++;
	}
	va_end(args);
	return (1);
}
