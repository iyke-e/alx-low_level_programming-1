#include "main.h"
/**
 * _print_rev_recursion - the main entry point
 * Description: prints a string in reverse
 * @s: pointer
 * Return: string
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		/* calls the next address space until it reach \0 */
		/* creating a stack starting from s + n down to s */
		_puts_recursion(s + 1);
		_putchar(*s);
	}
}
