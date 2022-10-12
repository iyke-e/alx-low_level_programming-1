#include "function_pointers.h"

/**
 * int_index - executes a function given as a parameter
 * on each element of an array.
 * @array: the array
 * @size: size of the array
 * @cmp: a A pointer to a function to be used to compare values
 * Return: the index of the first element for which the cmp function
 * does not return 0.
 * If no element matches, return -1
 * If size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	index = 0;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
		{
			return (index);
		}
	}

	return (-1);
}
