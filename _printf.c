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
	va_list ap;
	int cont_f = 0, cont_p = 0, ret = 0, test = 0;
	pr prt[] = {{'c', print_c},
		{'s', print_s},
		{'%', print_mod},
		{'d', print_int},
		{'i', print_int},
		{'\0', NULL}};

	va_start(ap, format);
	if (format == NULL)
		return (-1);
	while (format != NULL && format[cont_f] != '\0')
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
			if (test != 1)
				_putchar(format[cont_f]);
		} else
			_putchar(format[cont_f]);
		cont_f++;
	}
	va_end(ap);
	return (ret + cont_f);
}
