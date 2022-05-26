#include "main.h"
#include <unistd.h>

/**
 * _putchar - to print a character
 * @c: character to be printed
 *
 * Description - updated to use a local buffer of 1024 chars
 * in order to call write as little as possible.
 * Return: written character
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _puts -  prints a string
 * @str: string to be printed
 *
 * Return: int
 */

int _puts(char *str)
{
	register int n;

	for (n = 0; str[n] != '\0'; n++)
		_putchar(str[n]);
	return (n);
}
