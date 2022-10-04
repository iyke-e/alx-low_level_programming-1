#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *str_concat - concatenates two strings.
 * @s1: string
 * @s2: string
 * Return: a pointer to the array, or NULL if it fails
 *         NULL if string is empty
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int len = 0;
	int len2 = 0;
	int i = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[i] != '\0')
	{
		i++;
		len++;
	}

	while (s2[i] != '\0')
	{
		i++;
		len2++;
	}

	ptr = malloc(sizeof(char) * (len + len2 + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		ptr[i] = s1[i];
	}

	for (i = 0; i < len2; i++)
	{
		ptr[i + len1] = s2[i];
	}
	ptr[i + len] = '\0';
	return (ptr);
}
