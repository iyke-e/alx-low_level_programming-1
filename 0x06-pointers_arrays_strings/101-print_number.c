#include "main.h"
/**
 * print_number - the entry point
 * Description: function that prints an integer
 * @n: integer to print
 * Return: always 0
 */
void print_number(int n)
{
	int i;
	int divisor = 1;
	unsigned int x = n;
	unsigned int y = n;
	int c = 0;

	if (n == 0)
	{
		_putchar('0');
	}
	if (n < 0)
	{
		_putchar('-');
		n = n + 1; /* increment the number */
		n = -n;
		y = n;
		x = n;
		x += 1;
		y += 1;
	}

	while (x != 0)
	{
		x = x / 10; /* first digit */
		c++; /*  increment c until the remainder is 0 */
	}
	for (i = 1; i < c; i++)
	{
		divisor *= 10; /* increment the divisor by 10 */
	}
	for (i = 0; i < c; i++)
	{
		_putchar((y / divisor) + '0');
		y = y % divisor;
		divisor = divisor / 10;
	}
}
