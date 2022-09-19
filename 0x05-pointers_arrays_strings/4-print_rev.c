#include "main.h"
#include "2-strlen.c"
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

	/**
	 * length - 1 since the real length does not contain \0 in it
	 * school = index 0 to 5 i.e length of 6
	 * length - 1 = 5 giving the last digit which is l
	 */
	for (i = _strlen(s) - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
