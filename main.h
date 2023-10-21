#ifndef MAIN_h
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>

typedef struct args
{
	char *id;
	int (*f)();
} match;

char _putchar(char c);
int _printf(const char *format, ...);
int print_str(va_list string);
int _strlen(char *str);
int print_char(va_list val);
int print_mod(void);
int print_bin(va_list binary);
int print_dec(va_list decimal);
int print_unsigned(va_list unsign);
int print_int(va_list integer);
int print_HEX(va_list HEXA);
int print_hex(va_list hexa);
int print_octal(va_list notation);
int print_pointer(va_list point);
int print_rot13(va_list encode);
int print_rev(va_list reverse);
int print_STR(va_list str);
int print_hex_ex(unsigned long int num);

#endif
