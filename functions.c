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
