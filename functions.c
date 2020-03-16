#include <stdarg.h>
#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * p_char - print a char
 * @list: va_list
 * Return: a number char
 */
int p_char(va_list list)
{
	return (_putchar(va_arg(list, int)));
}

/**
 * p_string - print a string.
 * @list: va_list
 * Return: a string
 */

int p_string(va_list list)
{
	return (_puts(va_arg(list, char *)));
}
