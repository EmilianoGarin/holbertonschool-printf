#include "main.h"

/**
 * _printf - Prints anything
 * @format: is a string with characters to print and the format of arguments
 * Return: return the numbers of characters printed
 */

int _printf(const char *format, ...)
{
	va_list ap;
	int cont_f = 0, cont_p = 0, ret = 0, test = 0;
	pr prt[] = {{'c', print_c},/*pr is a struct that stores a char 'mane'*/
		{'s', print_s},/*and a function pointer 'print'*/
		{'%', print_mod},/*prt is an array of type pr that store*/
		{'d', print_int},/* the format indicator and the function*/
		{'i', print_int},/*to use*/
		{'\0', NULL}};

	va_start(ap, format); /*initialist the list ap*/
	if (format == NULL)/*check if format isn't NULL*/
		return (-1);
	while (format[cont_f] != '\0')/*walks the string format*/
	{/*check if the format position cont_f is equal to %*/
		if ('%' == format[cont_f])
		{
			test = 0;
			cont_p = 0;/*check if the format position cont_f + 1*/
			if (format[cont_f + 1] == '\0')/*is equal to \0*/
				return (-1);/*walks the prt.print and check*/
			while (prt[cont_p].print != NULL && test != 1)
			{/*if a format was found*/
				if (prt[cont_p].name == format[cont_f + 1])
				{/*compare prt.name with character format*/
					ret += prt[cont_p].print(ap);
					cont_f++;/*format characters are*/
					ret -= 2;/* substract includ %*/
					test = 1;/*a format was found*/
				}
				cont_p++;
			}
			if (test != 1)/*check if a format wasn't found*/
				_putchar(format[cont_f]);
		} else
			_putchar(format[cont_f]);
		cont_f++;
	}
	va_end(ap);/*free the list ap*/
	return (ret + cont_f);/*return a numbers of characters printed with*/
} /*a format plus the character of format*/
