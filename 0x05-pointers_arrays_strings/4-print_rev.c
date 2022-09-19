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
	int i = -2;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
