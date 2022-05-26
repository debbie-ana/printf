#include "main.h"

/**
 * conv_add - prints address
 * @a: number to be converted to address
 *
 * Return: int
 */

int conv_add(va_list a)
{
	char *s;
	unsigned long int p = va_arg(a, unsigned long int);

	register int len = 0;

	if (!p)
		return (_puts("(nil)"));
	s = converts(p);
	len += _puts("0x");
	len += _puts(s);
	return (len);
}
