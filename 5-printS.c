#include "main.h"

/**
 * print_S - prints the string
 * @s: string to be printed
 *
 * Return: number of characters
 */

int print_S(va_list s)
{
	char *str;
	int i, len = 0;

	str = va_arg(s, char *);
	for (i = 0; str[i]; i++)
	{
		if ((str[i] > 0 && str[i] < 32) || (str[i] >= 127))
		{
			_putchar('\\');
			_putchar('x');
			_putchar(str[i] / 16)
			_putchar(str[i] % 16);
			len += 4;
		}
		else
		{
			_putchar(str[i]);
			len++;
		}
	}
	return (len);
}
