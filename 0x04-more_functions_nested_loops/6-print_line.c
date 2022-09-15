#include "main.h"
/**
 * print_line - the entry point
 * @n: number of lines
 * Description: draws a straight line in the terminal
 * Return: always 0
 */
void print_line(int n)
{
	int line;

	for (line = n; line > 0; line--)
	{
		_putchar('_');
	}
	_putchar('\n');
}
