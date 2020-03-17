#include <stdarg.h>
#include "holberton.h"
#include <stdlib.h>
/**
 * selection - Function that selects the correct function to print.
 * @format: Address to String.
 * @list1: A Valist.
 * @ops1: Address to an Structure.
 *
 * Return: an int.
 */

int selection(const char *format, va_list list1, functions *ops1)
{
	int i = 0, j = 0, count = 0;

	while (format[i] && format)
	{
		if (format[i] == '%' && format[i + 1] == '\0')
			return (-1);
		if (format[i] == '%' && (format[i + 1] == ' ' || format[i + 1] != '%'))
		{
			if (format[i + 1] == ' ')
			{
				while (format[i + 1] == ' ')
				i++;
			}
			while (j < 6)
			{
				if (ops1[j].opc[0] == format[i + 1])
				{
					count = count + ops1[j].f(list1);
					i++;
					break;
				}
				j++;
			}
			if (j == 7)
				count = count + _putchar('%');
		}
		else if (format[i] == '%' && format[i + 1] == '%')
		{
			count = count + _putchar('%');
			i++;
		}
		else
		{
			count = count + _putchar(format[i]);
		}
		i++;
		j = 0;
	}
	return (count);
}

/**
 * _printf - Function that produces output according to a format.
 * @format: Address to String.
 * Return: An int.
 */

int _printf(const char *format, ...)
{
	va_list list;
	int i = 0;
	functions ops[] = {
		{"c", p_char},
		{"s", p_string},
		{"i", p_integer},
		{"d", p_integer},
		{"r", p_reverse},
		{"R", p_rot13},
	};
	if (format == NULL)
		return (-1);

	va_start(list, format);
	i = selection(format, list, ops);
	va_end(list);
	return (i);
}
