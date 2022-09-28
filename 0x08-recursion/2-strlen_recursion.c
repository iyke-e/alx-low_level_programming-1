#include "main.h"
/**
 * _strlen_recursion - the main entry point
 * Description: prints the length of a string
 * @s: pointer
 * Return: the length of a string
 */
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s != '\0')
	{
		n = _strlen_recursion(s + 1);
		return (n += 1);
	}
	return (0);
}
