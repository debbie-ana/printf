#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

typedef struct convert
{
	char *a;
	int (*f)(va_list);
} conv_a;

int _putchar(char c);
int conv_c(va_list);
int conv_s(va_list);
int conv_p(va_list);
int conv_d(va_list);
void write_bnum(char *str);
unsigned int basenum_len(unsigned int num, int base);
char *_memcpy(char *dest, char *src, unsigned int n);
char *rev_string(char *s);
int conv_b(va_list);
int conv_o(va_list);
int conv_x(va_list);
int conv_ux(va_list);
int conv_u(va_list u);
int get_func(const char *format, va_list args, conv_a b[]);
int _printf(const char *format, ...);

#endif
