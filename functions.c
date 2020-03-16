#include <stdarg.h>
#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * c_format - print a char
 * @list: va_list
 * Return: number char
 */
int p_char(va_list list)
{
	return(_putchar(va_arg(list, int)));
}
int p_string(va_list list)
{
	return(_puts(va_arg(list, char *)));
}
int p_int(va_list list)
{
	int integer, div = 1;
	int len_i = 0;
	unsigned int num;

	integer = va_arg(list, int);

	if (integer < 0)
	{
		len_i = len_i + _putchar('-');
		num = integer * -1;
	}
	else
		num = integer;
	while (num / div > 9)
		div = div * 10;
	while (div != 0)
	{
		len_i = len_i + _putchar('0' + num / div);
		num = num % div;
		div = div / 10;
	}
	return (len_i);	
}
