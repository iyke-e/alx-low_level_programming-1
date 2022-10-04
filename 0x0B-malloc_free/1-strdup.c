#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string to copy
 * Return: a pointer to the array, or NULL if it fails
 *         NULL if string is empty
 */
char *_strdup(char *str)
{
	char *ptr;
	int len_string = 0;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[c] != '\0')
	{
		c++;
	}

	ptr = malloc(sizeof(char) * c)

		if (ptr == NULL)
		{
			return (NULL);
		}

	for (i = 0; i < c; i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);
}
