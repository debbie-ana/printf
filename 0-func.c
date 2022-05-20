#include "main.h"
#include <stdarg.h>

/**
 * conv_c - character format
 * @c: character
 *
 * Return: int
 */

int conv_c(va_list c)
{
	_putchar(va_arg(c, int));
	return (1);
}

/**
 * conv_s - string format
 * @s: string
 *
 * Return: length of string
 */

int conv_s(va_list s)
{
	int i;
	char *str = va_arg(s, char *);

	if (str == 0)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
		_putchar (str[i]);
	return (i);
}

/**
 * conv_p - percentage format
 * @p: %character
 *
 * Return: int
 */

int conv_p(__attribute__((unused)) va_list p)
{
	_putchar ('%');
	return (1);
}

/**
 * conv_d - decimal integer
 * @d: integer
 *
 * Return: int
 */

int conv_d(va_list d)
{
	int number = va_arg(d, int);
	
	return (number);
}

/**
 * conv_i - integer
 * @i: integer
 *
 * Return: int
 */

int conv_i(va_list i)
{
	_putchar(va_arg (i, int));
	return (1);
}
