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

    len = _printf("%d\n", 123, 123123);
    len2 = printf("%d\n", 123, 123123);
    printf("%d \n%i \n", len, len2);
    return (0);
}

