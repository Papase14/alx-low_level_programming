#include <stdio.h>

/**
 * main - Program write alphabets in reverse from z to a
 *
 * Return: 0 (success)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}
