#include "main.h"
/**
 * _putchar - Prints a char.
 * @c: A character.
 * Return: write(1, &c, 1).
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
