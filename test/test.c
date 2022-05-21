#include <stdio.h>
#include "../main.h"

int main(void)
{
	int a, b, c, d;

	a = printf("my name is %s and 100% %c, % re\n", "debby", 'a');
	printf("%d\n", a);

	b = _printf("my name is %s and 100% %c, % re\n", "debby", 'a');
	printf("%d\n", b);

	c = printf("she is %d", -5897643);
	printf("%d\n", c);
	d = _printf("she is %d", -5897643);
	printf("%d\n", d);

	a = printf("%d   ", 0);
	printf("%d\n", b);
	b = _printf("%d   ", 0);
	printf("%d\n", b);
	return (0);
}
