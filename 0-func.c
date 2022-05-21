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
 * conv_d - integer or decimal format
 * @d: integer value to be printed
 *
 * Return: count of digits
 */

int conv_d(va_list d)
{
	int n;
	int a, b, count, i = 0;

	n = va_arg(d, int);
	if (n < INT_MIN || n > INT_MAX)
		return (-1);
	if (n < 0)
	{
		_putchar(45);
		n *= -1;
		i += 1;
	}
	a = n;
	b = a;
	count = 1;
	while (b > 9)
	{
		b = b / 10;
		count *= 10;
	}
	for (; count >= 1; count /= 10, i++)
		_putchar(((a / count) % 10) + '0');
	return (i);
}
