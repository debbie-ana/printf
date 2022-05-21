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
	printf("%d", c);
	d = _printf("she is %d", -5897643);
	printf("%d", d);
	return (0);
}
