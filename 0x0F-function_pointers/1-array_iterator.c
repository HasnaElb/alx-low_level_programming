#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_iterator - Executes a function given as a parameter on each
 * element of an array
 * @array: the array
 * @size: the size of array
 * @action: a pointer to the function to be executed
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	i = 0;

	if (array != NULL || action != NULL)
	{
	for (i = 0; i < size; i++)
		action(array[i]);
	}
}
