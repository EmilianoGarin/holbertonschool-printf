#include "main.h"
/**
 *
 *
 *
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 *
 *
 *
 */
int print_s(va_list ap)
{
	int ret = 0;
	char *str = va_arg(ap, char *);

	while (str[ret] != '\0')
		ret++;
	write(1, str, ret);
	return (ret);
}
/**
 *
 *
 *
 */
int print_c(va_list ap)
{
	char c = va_arg(ap, int);

	_putchar(c);
	return (1);
}
/**
 *
 *
 *
 */
int print_mod(__attribute__((unused)) va_list ap)
{
	_putchar('%');
	return (1);
}
/**
 *
 *
 *
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
 *
 *
 *
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

