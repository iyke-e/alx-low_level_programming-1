#include "main.h"
/**
 * print_diagonal - the entry point
 * Description: draws a diagonal line in the terminal
 * @n: number of slash
 * Return: always 0
 */
void print_diagonal(int n)
{
	int slash;
	int spaces;
	int i;

	for (slash = n; slash > 0; slash--)
	{
		spaces = n - slash;
		for (i = spaces; i < spaces; i--)
		{
			_putchar(' ');
		}
		_putchar(92);
	}
	_putchar('\n');
}
