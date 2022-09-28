#include "main.h"
/**
 * _puts_recursion - the main entry point
 * Description: prints a string followed by a new line
 * @s: pointer
 * Return: string
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		/* prints the first character */
		_putchar(*s);
		/* moves to the next address space */
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
