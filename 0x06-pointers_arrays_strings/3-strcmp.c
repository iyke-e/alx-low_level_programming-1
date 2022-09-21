#include "main.h"
/**
 * _strcmp - the entry point
 * Description: compares a string.
 * @s1: string pointer
 * @s2: string pointer
 * Return: always 0
 */
int _strcmp(char *s1, char *s2)
{
	/* minus the ASCII value of the first letter in each string*/
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
