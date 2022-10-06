#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *array_range - creates an array of integers.
 * Description: The array contains all the values from min(included)
 * to max (included), ordered from min to max
 * @min: value
 * @max: value
 * Return: the pointer to the newly created array
 *If min > max, return NULL
 *If malloc fails, return NULL
 */
int *array_range(int min, int max)
{
	int *array, i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		array[i] = min++;
	}

	return (array);
}
