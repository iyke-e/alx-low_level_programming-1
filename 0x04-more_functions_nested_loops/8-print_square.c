#include "main.h"
/**
 * print_square - the entry point
 * Description: draws a square in the terminal
 * @size: size of the square
 * Return: always 0
 */
void print_square(int size)
{
	int hashes;
	int squares;

	if (size > 0)
	{
		for (squares = 0; squares < size; squares++)
		{
			for (hashes = 0; hashes < size, hashes++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
