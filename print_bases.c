#include "main.h"

/**
 * print_binary - prints a number in base 2
 * @b: va_list args
 * @f: pointer
 *
 * Return: number of char printed
 */

int print_binary(va_list b, mods *f)
{
	unsigned int num = va_arg(1, unsigned int);
	char *str = convert(num, 2, 0);

	(void)f;
	return (_puts(str));
}
