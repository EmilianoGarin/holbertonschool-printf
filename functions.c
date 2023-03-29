#include "main.h"
/**
 * print_s - Prints a string.
 * @ap: A list with all arguments.
 * Return: On success return the number of printed chars
 * If the argument in the list is 'NULL' returns 6.
 */
int print_s(va_list ap)
{
	int ret = 0;
	char *str = va_arg(ap, char *);
	char *null = "(null)";

	if (str == NULL)
	{
		write(1, null, 6);
		return (6);
	}
	while (str[ret] != '\0')
		ret++;
	write(1, str, ret);
	return (ret);
}
/**
 * print_c - Prints a character.
 * @ap: A list with all arguments.
 * Return: Always 1.
 */
int print_c(va_list ap)
{
	char c = va_arg(ap, int);

	_putchar(c);
	return (1);
}
/**
 * print_mod - Prints the module.
 * @ap: A list with all arguments.
 * Return: Always 1.
 */
int print_mod(__attribute__((unused)) va_list ap)
{
	_putchar('%');
	return (1);
}
/**
 * print_num - Prints a number.
 * @num: The number given.
 * Return: The number of digits given.
 */
int print_num(int num)
{
	int x = 1;

	if (num > 9)
		x = print_num(num / 10) + x;
	_putchar((num % 10) + '0');
	return (x);
}
/**
 * print_int - Prints an int.
 * @ap: A list with all arguments.
 * Return: The number of digits given.
 */
int print_int(va_list ap)
{
	int i = va_arg(ap, int);
	int ret = 0;

	if (i < 0)
	{
		_putchar('-');
		i = -i;
		ret++;
	}
	ret += print_num(i);
	return (ret);
}

