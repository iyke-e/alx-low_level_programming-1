#include "main.h"
/**
 * print_line - the entry point
 * Description: draws a straight line in the terminal
 * @n: number of dashes
 * Return: always 0
 */
void print_line(int n)
{
	int i = 0;

	if (n <= 0)
	{
		_putchar('\n');
		continue;
	}
	else
	{
		while (i < n)
		{
			_putchar('_');
			i++
				}
	}
}
