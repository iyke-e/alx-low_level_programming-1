#include "main.h"
#include "2-strlen.c"
/**
 * puts_half - the entry point
 *
 * Description: prints half the string
 *
 * @str: pointer string
 *
 * Return: always 0
 */
void puts_half(char *str)
{
	int i;
	int len = _strlen(str) - 1;

	if (len % 2 == 0)
	{
		for (i = (len / 2); i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = (len - 1 / 2); i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
