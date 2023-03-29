#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;

    len = _printf("Hola%d%%%s%c%\n%\n", 2, "b", 't');
    len2 = printf("Hola%d%%%s%c%\n%\n", 2, "b", 't');
    printf("%d\n %d\n", len, len2);
    len = _printf("Hola%s\n", "b");
    len2 = printf("Hola%s\n", "b");
    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
    return (0);
}
