#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print a sequence from a given number to 98
 * @n: strating number
 *
 */
void print_to_98(int n)
{
	do {
		printf("%d", n);
		if (n > 98)
			--n;
		else if (n < 98)
			++n;
		printf(", ");
	} while (n != 98);
	printf("%d", 98);
	printf("\n");
}
