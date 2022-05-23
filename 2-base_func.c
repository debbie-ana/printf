#include "main.h"
#include <stdio.h>

void write_bnum(char *str);
unsigned int basenum_len(unsigned int num, int base);
char *_memcpy(char *dest, char *src, unsigned int n);
char *rev_string(char *s);

/**
 * conv_b - converts a number to binary
 * @b: argument received
 * Return: length
 */

int conv_b(va_list b)
{
	unsigned int num;
	int i, len;
	char *str;
	char *rev_str;

	num = va_arg(b, unsigned int);
	if (num == 0)
		return (_putchar('0'));
	if (num < 1)
		return (-1);
	len = basenum_len(num, 2);
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
	write_bnum(rev_str);
	free(str);
	free(rev_str);
	return (len);
}

/**
 * write_bnum - writes number in a particular base to stdout
 * @str: number string
 *
 * Return: void
 */

void write_bnum(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		_putchar(str[i]);
}

/**
 * basenum_len - gives the number of digits in a particular base
 * @num: number used to get digits
 * @base: number base
 *
 * Return: length of number in its base
 */

unsigned int basenum_len(unsigned int num, int base)
{
	unsigned int i;

	for (i = 0; num > 0; i++)
		num = num / base;
	return (i);
}

/**
 * _memcpy - copies memory area
 * @dest: where it is copied to
 * @src: source to be copied from
 * @n: number of bytes to copy from memory area
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 *
 * Return: reversed string
 */

char *rev_string(char *s)
{
	int i, len;
	char temp, *dest;

	for (len = 0; s[len] != '\0'; len++)
	{}
	dest = malloc(sizeof(char) * len + 1);
	if (dest == NULL)
		return (NULL);
	_memcpy(dest, s, len);
	for (i = 0; i < len; i++, len--)
	{
		temp = dest[len - 1];
		dest[len - 1] = dest[i];
		dest[i] = temp;
	}
	return (dest);
}
