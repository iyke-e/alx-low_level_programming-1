#include "main.h"
/**
 * *_strchr - the main entry point
 * Description: function that locates a character in a string
 * @s: character pointer
 * @c: char to find
 * Return: a pointer to the first occurrence of the character c
 * in the string s, or NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0' ; s++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	if (s[i] == c)
	{
		return (s + i);
	}
	return (0);
}
