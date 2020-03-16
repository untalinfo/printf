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
}functions;
/* in this section, the prototypes of all the basic functions and the
 * functions of each printf format will go
 */
int _printf(const char *format, ...);
int _puts(char *str);
int _putchar(char c);
int _strlen(char *s);
int p_char(va_list);
int p_string(va_list);
#endif
