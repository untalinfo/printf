#ifndef PRINTF_H
#define PRINTF_H
#include <stdarg.h>
typedef struct funct
{
	char *opc;
	int (*f)(va_list);
}functions;
int _printf(const char *format, ...);
int _puts(char *str);
int _putchar(char c);
int _strlen(char *s);
#endif
