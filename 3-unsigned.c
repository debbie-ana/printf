#include "main.h"

/**
 * conv_u - format for unsigned number
 * @u: number
 *
 * Return: length of number string
 */

int conv_u(va_list u)
{
	unsigned int num;
	int div, len;

	num = va_arg(u, unsigned int);
	if (num < 1 && num != 0)
		return (-1);
	div = 1;
	len = 0;
	for (; num / div > 9;)
		div *= 10;
	for (; div != 0;)
	{
		len += _putchar('0' + num / div);
		num %= div;
		div /= 10;
	}
	return (len);
}
