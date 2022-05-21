#include "main.h"
#include <stdio.h>
int hex_con(int, char);

/**
 * print_b - converts a number to binary
 * @b: list of args
 * Return: length
 */

int print_b(va_list b)
{
	unsigned int num;
	int i, len;
	char *str;
	char *rev_str;

	num = va_arg(b, unsigned int);
	if (num == 0)
		return (_write_char('0'));
	if (num < 1)
		return (-1);
	len = base_len(num, 2);
	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (-1);

	for (i = 0; num > 0; i++)
	{
		if (num % 2 == 0)
			str[i] = '0';
		else
			str[i] = '1';
		num = num / 2;
	}
	str[i] = '\0';
	rev_str = rev_string(str);
	if (rev_str == NULL)
		return (-1);
	write_base(rev_str);
	free(str);
	free(rev_str);
	return (len);
}
