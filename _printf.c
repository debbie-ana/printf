#include "main.h"

/**
 * get_func - gets function to match formatting
 * @format: character string
 * @args: arguments to printf
 * @b: array of pointers to functions
 *
 * Return: length
 */

int get_func(const char *format, va_list args, conv_a b[])
{
	unsigned int i, j;
	int n = 0, len = 0;

	for (i = 0; format && format[i]; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; b[j].a; j++)
			{
				if (*(b[j].a) == format[i + 1])
				{
					n = b[j].f(args);
					len += n;
					i++;
					break;
				}
			}
			if (b[j].a == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					len += 2;
					i++;
				}
				else
				{
					return (-1);
				}
			}
		}
		else
		{
			_putchar(format[i]);
			len++;
		}
	}
	return (len);
}

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
	int count;
	conv_a b[] = {
		{"c", conv_c},
		{"s", conv_s},
		{"%", conv_p},
		{"d", conv_d},
		{"i", conv_d},
		{"b", conv_b},
		{"u", conv_u},
		{"o", conv_o},
		{"x", conv_x},
		{"X", conv_ux},
		{NULL, NULL}
	};
	va_list(ap);

	va_start(ap, format);
	if (format == NULL)
		return (-1);
	count = get_func(format, ap, b);
	va_end(ap);
	return (count);
}
