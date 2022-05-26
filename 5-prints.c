#include "main.h"

/**
 * converts - converts to hex
 * @num: number to convert
 *
 * Return: hex value
 */
char *converts(unsigned int num)
{
	static char *rep;
	static char buff[50];
	char *str;

	rep = "0123456789ABCDEF";
	str = &buff[49];
	*str = '\0';
	do {
		*--str = rep[num % 16];
		num /= 16;
	} while (num != 0);
	return (str);
}

/**
 * conv_S - prints the string
 * @arg: argument
 *
 * Return: int count of characters
 */

int conv_S(va_list arg)
{
	int i, len = 0;
	char *s;
	char *a = va_arg(arg, char *);

	if (!a)
		return (_puts("(null)"));
	for (i = 0; a[i]; i++)
	{
		if (a[i] > 0 && (a[i] < 32 || a[i] >= 127))
		{
			_puts("\\x");
			len += 2;
			s = converts(a[i]);
			if (!s[1])
			{
				len += _putchar('0');
				len += _puts(s);
			}
		}
		else
			len += _putchar(a[i]);
	}
	return (len);
}
