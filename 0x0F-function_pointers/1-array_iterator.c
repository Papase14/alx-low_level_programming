#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as a parameter
 * @array: Array to pointer int
 * @size: Size of the array
 * @action: function pointer
 *
 * Rturn: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	if (array && size)
		for ( ; i < size; i++)
			action(array[i]);
}
