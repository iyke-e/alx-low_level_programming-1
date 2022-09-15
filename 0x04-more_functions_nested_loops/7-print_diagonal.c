#include "main.h"
/**
 * print_diagonal - the entry point
 * Description: draws a diagonal line in the terminal
 * @n: number of slash
 * Return: always 0
 */
void print_diagonal(int n)
{
	int diagonal;
	int spaces;

	if (n > 0)
	{
		for (diagonal = 1; diagonal <= n; diagonal++)
		{
			for (spaces = 1; spaces < diagonal; spaces++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
