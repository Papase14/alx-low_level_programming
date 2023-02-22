#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 * description - write a function that prints the alphabet in lowercase
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char alph;

	for(alph = 'a'; alph <= 'z'; ++alph)
	{
		_putchar(alph);
	}
	_putchar('\n');
}
