#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: character string including the format string
 *
 * Description - write output to stdout, the standard output stream
 * Return: the number of characters printed(excluding the null byte
 * used to end output to strings)
 */

int _printf(const char *format, ...)
{
	unsigned int i, j;
	int n = 0, len = 0;
	conv_a b[] = {
		{"c", conv_c},
		{"s", conv_s},
		{"%", conv_p},
		{NULL, NULL}
	};
	va_list(ap);

	va_start(ap, format);
	for (i = 0; format && format[i]; i++)
	{
		if (format[i] == '%')
		{
			i++;
			for (j = 0; b[j].a; j++)
			{
				if (*(b[j].a) == format[i])
				{
					n = b[j].f(ap);
					len += n;
					break;
				}
			}
			if (b[j].a == NULL)
			{
				_putchar('%');
				_putchar(format[i]);
				len += 2;
			}
		}
		else
		{
			_putchar(format[i]);
			len++;
		}
	}
	va_end(ap);
	return (len);
}
