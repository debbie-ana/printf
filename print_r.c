#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @str: string
 *
 * Return: string length
 */

int print_rev(va_list str)
{
	int i = 0, j;
	char *s = va_arg(str, char *);

	if (!s)
		s = "(null)";
	while (s[i])
		i++;
	for (j = i - 1; j >= 0; j--)
		_putchar(s[j]);
	return (i);
}

/**
 * print_r13 - prints a string using the rot13 string
 * @str: string
 *
 * Return: length of string
 */

int print_r13(va_list str)
{
	int i, j;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *s = va_arg(str, char *);

	for (j = 0; s[j]; j++)
	{
		if (s[j] < 'A' || (s[j] > 'Z' && s[j] < 'a') || s[j] > 'z')
			_putchar(s[j]);
		else
		{
			for (i = 0; i <= 52; i++)
			{
				if (s[j] == a[i])
					_putchar(b[i]);
			}
		}
	}
	return (j);
}
