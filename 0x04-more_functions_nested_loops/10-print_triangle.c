#include "main.h"
#include <stdio.h>
/**
 * print_triangle - the entry point
 * Description: prints a triangle
 *@size: size of triangle
 * Return: always 0
 */
void print_triangle(int size)
{
	int hashes;
	int spaces;

	if (size > 0)
	{
		for (hashes = 1; hashes <= size; hashes++)
		{
			for (spaces = 1; spaces <= size; spaces++)
			{
				if (spaces <= size - hashes)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
