#include <stdio.h>
#include "../main.h"

int main(void)
{
	int a, b;

	a = printf("my name is %s and 100%%\n", "debby");
	printf("%d\n", a);

	b = _printf("my name is %s and 100%%\n", "debby");
	printf("%d\n", b);
	return (0);
}
