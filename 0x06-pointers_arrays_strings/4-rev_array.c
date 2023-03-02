#include "main.h"

/**
 * reverse_array - reverses the content of an arry of integers
 * @n: number of elements of array
 * @a: array of integers
 */
void reverse_array(int *a, int n)
{
	int i = 0, j = n - 1, tmp;

	while (i < j)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		i++;
		j--;
	}
}
