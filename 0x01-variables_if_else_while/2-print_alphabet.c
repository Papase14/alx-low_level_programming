#include <stdio.h>

/**
 * main - Entry point
 * Description: print the aplhabet in lowercase
 * Return: 0 (success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
