#ifndef _TASK_
#define _TASK_
#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>
int _printf(const char *format, ...);
typedef struct printf
{
	char name;
	int (*print)(va_list ap);
} pr;
int _putchar(char);
int print_s(va_list ap);
int print_c(va_list ap);
int print_num(int num);
int print_mod(va_list ap);
int print_int(va_list ap);
#endif
