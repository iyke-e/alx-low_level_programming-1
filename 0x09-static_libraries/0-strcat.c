#include "main.h"
/**
 * *_strcat - the entry point
 * Description: concatenates two strings
 * @dest: string pointer
 * @src: string pointer
 * Return: always 0
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	/* the first string is printed & i = max length - 1 */
	for (i = 0; dest[i] != '\0'; i++)
	{}
	/* the 2nd string starts from the max of i plus j */
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';

	return (dest);
}
