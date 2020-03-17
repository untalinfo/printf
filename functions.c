#include <stdarg.h>
#include "holberton.h"
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
/**
 * p_integer - print a int
 * @list: va_list
 * Return: a int
 */
int p_integer(va_list list)
{
	int integer;
	int div = 1;
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
/**
 * p_reverse - functions that prints a string in reverse
 * @list: va_list
 * Return: lenr
 */
int p_reverse(va_list list)
{
	int i = 0, lenr = 0;
	char *s = va_arg(list, char *);

	while (s[i] != '\0')
		i++;
	lenr = i;
	i--;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	return (lenr);
}
/**
 * p_rot13 - functions that encodes a string using tor13
 * @list: va_list
 * Return: lenr
 */
int p_rot13(va_list list)
{
	int len = 0;
	int i, j;
	char *s = va_arg(list, char *);

	char alpha[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char replace[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= 52; j++)
		{
			if (s[i] == alpha[j])
			{
				len = len + _putchar(replace[j]);
				break;
			}
		}
	}
	return (len);
}

