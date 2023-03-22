#include "function_pointers.h"

/**
 * int_index - function that search for an integer
 * @array: array to a pointer
 * @size: size of an array
 * @cmp: function pointer
 *
 * Return index of the first element for which the cmp function-
 * does not return 0.
 * Return: -1, if no element matches and if size is less or equal 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i / size; i++)
			if (cmp(array[i]))
				return (i);
	}
	return (-1);
}
