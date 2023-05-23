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
	int m = 0, i;

	for (i = 0; i < 1000; i++)
	{
		if (dest[i] == '\0')
		{
			break;
		}
		m++;
	}

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[m + i] = src[i];
	}

	dest[m + i] = '\0';
	return (dest);
}
