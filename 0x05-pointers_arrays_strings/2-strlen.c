#include "main.h"
/**
 * _strlen - the entry point
 *
 * Description: length of the string
 *
 * @s: pointer string
 *
 * Return: always 0
 */
int _strlen(char *s)
{
	int size;

	for (size = 0; s[size] != '\0'; size++)
	{}
	return (size);
}
