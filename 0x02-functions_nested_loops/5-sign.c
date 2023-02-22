#include <stdio.h>
#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: the numebr to be processed
 *
 * Return: 1 if the number is positive, 0 if the number is 0, else -1
 */
int print_sign(int n)
{
	if (n >= 1)
	{
		_putchar('+');
		return (1);
	}
	else if (n <= 1)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
