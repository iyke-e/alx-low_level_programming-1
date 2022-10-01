#include "main.h"
/**
 * _puts - the entry point
 * Description: prints a string, followed by a new line
 * @str: pointer string
 * Return: always 0
 */
void _puts(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
