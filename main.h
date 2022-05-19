#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct convert
{
	char *a;
	int (*f)(va_list);
} conv_a;
int _putchar(char c);
int conv_c(va_list);
int conv_s(va_list);
int conv_p(va_list);
int _printf(const char *format, ...);

#endif
