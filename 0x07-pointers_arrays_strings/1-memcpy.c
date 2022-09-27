#include "main.h"
/**
 * *_memcpy - the main entry point
 * Description: function that copies memory area.
 * @dest: destination character pointer
 * @src: source character pointer
 * @n: n bytes of the memory
 * Return: Returns a pointer to the memory area s
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
