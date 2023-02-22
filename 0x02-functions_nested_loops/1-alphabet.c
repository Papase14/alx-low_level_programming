#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - write a function that prints the alphabet in lowercase
 * 
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char alph;

	for (chalph = 'a'; alph <= 'z'; alph++)
		_putchar(alph);
	_putchar('\n');
}
