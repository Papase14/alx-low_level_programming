#include <stdio.h>
#include "main.h"

/**
 * _islower - check the code
 * description - write a program that checks for lowercase characters
 *@c: the character to be checked
 *
 * return: 1 if character is lowercase, else 0.
 */
int _islower(int c)
{
	if (c  => 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
