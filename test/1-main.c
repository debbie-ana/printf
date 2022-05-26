#include "../main.h"
#include <stdio.h>

/**

 * main - Entry point

 *

 * Return: Always 0

 */

int main(void)

{

    _printf("%S\n", "Best\nSchool");
    printf("Could you print some non-prntable characters?\n%S\nThanks!\n", "Sure:\x1F\x7F\n");

	printf("Complete the sentence: You %R nothing, Jon Snow.\n", "");
	printf("Complete the sentence: You %R nothing, Jon Snow.\n", "xabj");
	printf("Complete the sentence: You %r nothing, Jon Snow.\n", "");
	printf("%r", "\nThis sentence is retrieved from va_args!");
	printf("%pppp", (void *)0x7fff5100b6f8);_printf("%p", NULL);
	printf("%p", (void *)0x7fff5100b608);

	_printf("Complete the sentence: You %R nothing, Jon Snow.\n", "");
	_printf("Complete the sentence: You %R nothing, Jon Snow.\n", "xabj");
	_printf("Complete the sentence: You %r nothing, Jon Snow.\n", "");
	_printf("%r", "\nThis sentence is retrieved from va_args!");
	_printf("%pppp", (void *)0x7fff5100b6f8);_printf("%p", NULL);
	_printf("%p", (void *)0x7fff5100b608);
    return (0);

}
