#include "main.h"

/**
 * _strncat - concatenate two strings by number of bytes
 * @n: number of bytes
 * @src: string to copy
 * @dest: string to be copied into
 * Return: a pointer to the resuting string @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x = 0, y = 0;

	do {
		x++;
	} while (dest[x] != '\0');

	do {
		dest[x] = src[y];
		x++;
		y++;
	} while (src[y] != '\0' && y < n);

	return (dest);
}
