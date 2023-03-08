#include "main.h"

/**
 * _puts_recursion - prints a string followed by a line
 *
 * @s: string to a pointer
 * return: no return
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
