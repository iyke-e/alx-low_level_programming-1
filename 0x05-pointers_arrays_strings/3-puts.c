#include "main.h"
/**
 * _puts - the entry point
 *
 * Description: prints a string, followed by a new line
 *
 * @str: pointer string
 *
 * Return: always 0
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
