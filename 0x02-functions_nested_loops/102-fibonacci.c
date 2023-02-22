#include <stdio.h>

/**
 * main - print first 50 fibonacci
 * starting with 1 and 2
 * followed by a new line
 * Return: 0 always
 */
int main(void)
{
	long int i, j = 1, k = 2, next;

	for (i = 1; i <= 50; ++i)
	{
		if (j != 20365011074)
		{
			printf("%ld, ", j);
		} else
		{
			printf("%ld\n", j);
		}
		next = j + k;
		j = k;
		k = next;
	}
	return (0);
}
