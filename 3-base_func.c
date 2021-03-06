#include "main.h"
int hex_check(int, char);

/**
 * conv_o - prints octal
 * @o: argument
 *
 * Return: number of octal characters
 */

int conv_o(va_list o)
{
	unsigned int num;
	int len;
	char *octal_rep;
	char *rev_str;

	num = va_arg(o, unsigned int);

	if (num == 0)
		return (_putchar('0'));
	if (num < 1)
		return (-1);
	len = basenum_len(num, 8);

	octal_rep = malloc(sizeof(char) * len + 1);
	if (octal_rep == NULL)
		return (-1);
	for (len = 0; num > 0; len++)
	{
		octal_rep[len] = (num % 8) + 48;
		num = num / 8;
	}
	octal_rep[len] = '\0';
	rev_str = rev_string(octal_rep);
	if (rev_str == NULL)
		return (-1);

	write_bnum(rev_str);
	free(octal_rep);
	free(rev_str);
	return (len);
}

/**
 * conv_x - prints hexadecimal
 * @x: list of args
 * Return: number of characters
 */

int conv_x(va_list x)
{
	unsigned int num;
	int len;
	int rem_num;
	char *hex_rep, *rev_hex;

	num = va_arg(x, unsigned int);
	if (num == 0)
		return (_putchar('0'));
	if (num < 1)
		return (-1);
	len = basenum_len(num, 16);
	hex_rep = malloc(sizeof(char) * len + 1);
	if (hex_rep == NULL)
		return (-1);
	for (len = 0; num > 0; len++)
	{
		rem_num = num % 16;
		if (rem_num > 9)
		{
			rem_num = hex_check(rem_num, 'x');
			hex_rep[len] = rem_num;
		}
		else
			hex_rep[len] = rem_num + 48;
		num = num / 16;
	}
	hex_rep[len] = '\0';
	rev_hex = rev_string(hex_rep);
	if (rev_hex == NULL)
		return (-1);
	write_bnum(rev_hex);
	free(hex_rep);
	free(rev_hex);
	return (len);
}

/**
 * conv_ux - uppercase of conv_x
 * @ux: argument
 *
 * Return: number of characters printed
 */

int conv_ux(va_list ux)
{
	unsigned int num;
	int len, rem_num;
	char *hex_rep;
	char *rev_hex;

	num = va_arg(ux, unsigned int);
	if (num == 0)
		return (_putchar('0'));
	if (num < 1)
		return (-1);
	len = basenum_len(num, 16);
	hex_rep = malloc(sizeof(char) * len + 1);
	if (hex_rep == NULL)
		return (-1);
	for (len = 0; num > 0; len++)
	{
		rem_num = num % 16;
		if (rem_num > 9)
		{
			rem_num = hex_check(rem_num, 'X');
			hex_rep[len] = rem_num;
		}
		else
			hex_rep[len] = rem_num + 48;
		num = num / 16;
	}
	hex_rep[len] = '\0';
	rev_hex = rev_string(hex_rep);
	if (rev_hex == NULL)
		return (-1);
	write_bnum(rev_hex);
	free(hex_rep);
	free(rev_hex);
	return (len);
}

/**
 * hex_check - checks for upper or lower hex
 * @num: number to convert
 * @x: hex function
 *
 * Return: hex value of num
 */

int hex_check(int num, char x)
{
	char *hex = "abcdef";
	char *Hex = "ABCDEF";

	num = num - 10;
	if (x == 'x')
		return (hex[num]);
	else
		return (Hex[num]);
	return (0);
}
