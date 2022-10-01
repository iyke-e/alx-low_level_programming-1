#include "main.h"
/**
 * *_strncat - the entry point
 * Description: concatenates two strings with
 * at most n bytes from src
 * @dest: string pointer
 * @src: string pointer
 * @n: number of bytes
 * Return: always 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	/* the first string is printed & i = max length - 1 */
	for (i = 0; dest[i] != '\0'; i++)
	{}
	/* the 2nd string starts from the max of i plus j */
	for (j = 0; j < n && src[i] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';

	return (dest);
}
