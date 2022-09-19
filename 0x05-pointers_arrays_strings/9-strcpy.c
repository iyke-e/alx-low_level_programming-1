#include "main.h"
#include "2-strlen.c"
/**
 * *_strcpy - the entry point
 *
 * Description: prints n elements
 *
 * @dest: buffer pointer
 * @src: pointer string
 *
 * Return: always 0
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int len = _strlen(src);

	for (i = 0; i <= len, i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
