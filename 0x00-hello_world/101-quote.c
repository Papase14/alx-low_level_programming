#include <stdio.h>
#include <unistd.h>
/**
 * main - a program that prints a line to the standard erro
 *
 * Return: 1 (Success)
 */
int main(void)
{
	fprintf(stderr, "%s", "and that piece of art is useful\"");
	fprintf(stderr, "%s", " - Dora Korpar, 2015-10-19\n");
	return (1);
}
