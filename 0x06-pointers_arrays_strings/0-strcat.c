#include "main.h"

/**
 * *_strcat - function commute srtings
 * @dest: param pointer to a char
 * @src: param pointer to a char
 * Return: return value of dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	do {
		i++;
	} while (dest[i] != '\0');

	do {
		dest[i] = src[j];
		j++;
		i++;
	} while (src[j] != '\0');

	return (dest);
}
