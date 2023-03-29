#include "main.h"

/**
 * _printf - Prints anything
 *
 * @format:
 *
 * Description:
 *
 * Return: void
 */

int _printf(const char *format, ...)
{
	int test = 0;
	va_list ap;
	int cont_f = 0, cont_p = 0, ret = 0;
	pr prt[] = {
		{'c', print_c},
		{'s', print_s},
		{'%', print_mod},
		{'d', print_int},
		{'i', print_int},
		{'\0', NULL}};

	va_start(ap, format);
	while (format[cont_f] != '\0')
	{
		if ('%' == format[cont_f])
		{
			test = 0;
			cont_p = 0;

			if (format[cont_f + 1] == '\0')
				return (-1);
			while (prt[cont_p].print != NULL && test != 1)
			{
				if (prt[cont_p].name == format[cont_f + 1])
				{
					ret += prt[cont_p].print(ap);
					cont_f++;
					ret -= 2;
					test = 1;
				}
				cont_p++;
			}
			if (prt[cont_p - 1].print == NULL)
			{
				_putchar(format[cont_f]);
			}
		}
		else
			_putchar(format[cont_f]);
		cont_f++;
	}
	va_end(ap);
	return (ret + cont_f);
}
