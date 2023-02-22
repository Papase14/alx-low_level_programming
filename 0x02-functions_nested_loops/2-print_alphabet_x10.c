#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - check the code
 * description - write a program that prints alphabet a - z 10 times
 *
 * return: always 0.
 */
void print_alphabet_x10(void)
{
	int number = 0;
	char alph;

	do {
		for (alph = 'a'; alph <= 'z'; ++alph)
			_putchar(alph);
		_putchar('\n');
		number++;
	} while (number < 10);
}
