#include <stdarg.h>
#include "holberton.h"

int _printf(const char *format, ...)
{
	va_list list;
	unsigned int i, j;
	char *s;
	functions ops[] = {
		{"c", p_char},
		{"s", p_string},
	};

	va_start(list, format);
	j = 0;
	s = "";

	while (format != NULL && format[j] != '\0')
	{
		
}
