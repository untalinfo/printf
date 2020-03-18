#include "holberton.h"
#include <unistd.h>
#include <stdio.h>

/**
 * _puts - Function that prints a string, follow by a new line.
 * @str: Pointer of the string str.
 * Return: 0
 */
int _puts(char *str)
{
	int l = 0;

	while (str[l] != '\0')
	{
		_putchar(str[l]);
		l++;
	}
	return (l - 1);
}

/**
 * _putchar - Writes the character c to stdout.
 * @c: The type character to print.
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _strlen - Length of a string.
 * @s: char array pointer.
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately.
 */

int _strlen(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
