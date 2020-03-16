#include <stdarg.h>
#include <stdio.h>
#include "holberton.h"

int selection(const char *format, va_list list1, functions *ops1)
{
	int i = 0, j = 0, count = 0;

	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] == '\0')
			return (-1);
		if (format[i] == '%' && (format[i +1] == ' ' || format[i + 1] != '%'))
		{
			if (format[i +1] == ' ')
			{
				while (format[i + 1] == ' ')
				i++;
			}
			while(j < 4)
			{
				if(ops1[j].opc[0] == format[i + 1])
				{
				//	printf("1\n");
					count = count + ops1[j].f(list1);
					i++;
					break;
				}
				j++;
			}
		//	if (j == 3)
		//		count = count + _putchar('%');
		}
		else if (format[i] == '%' && format[i + 1] == '%')
		{
			count = count + _putchar('%');
			i++;
		}
		else
		{
		//	printf("entro\n");
			count = count + _putchar(format[i]);
		}
		i++;
		j = 0;
	}
	return (count);
}
int _printf(const char *format, ...)
{
	va_list list;
	int i;
	functions ops[] = {
		{"c", p_char},
		{"s", p_string},
		{"i", p_int},
		{"d", p_int},
	};
	if (format == NULL)
		return (-1);

	va_start(list, format);
	i = selection(format, list, ops);
	va_end(list);
	return(i);
}
