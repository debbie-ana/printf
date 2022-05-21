#include "main.h"
#include <unistd.h>

/**
 * _putchar - to print a character
 * @c: character to be printed
 *
 * Return: written character
 */

int _putchar(char c)
{
	static char buf[1024];
	static int i;

	if (c == -1 || i >= 1024)
	{
		write(1, &buf, i);
		i = 0;
	}
	if (c != -1)
	{
		buf[i] = c;
		i++;
	}
	return (1);
}
