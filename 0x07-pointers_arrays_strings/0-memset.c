#include "main.h"
/**
 * *_memset - the main entry point
 * Description: function that fills memory with a constant byte.
 * @s: character pointer
 * @b: constant byte
 * @n: n bytes of the memory
 * Return: Returns a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
