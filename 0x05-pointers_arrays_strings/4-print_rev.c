#include "main.h"
/**
 * print_rev - the entry point
 *
 * Description: prints a string in reverse, followed by a new line
 *
 * @s: pointer string
 *
 * Return: always 0
 */
void print_rev(char *s)
{
	int i;

	for (i = -1; s[i] != '\0'; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
