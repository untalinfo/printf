#ifndef PRINTF_H
#define PRINTF_H
#include <stdarg.h>
/**
 * struct funct - struct of the functions for select a one format
 * @opc: opc
 * @f: function
 */
typedef struct funct
{
	char *opc;
	int (*f)();
} functions;


int _printf(const char *format, ...);
int _puts(char *str);
int _putchar(char c);
int _strlen(char *s);
int p_char(va_list);
int p_string(va_list);
int p_integer(va_list);
int p_reverse(va_list);
int p_rot13(va_list);
#endif
