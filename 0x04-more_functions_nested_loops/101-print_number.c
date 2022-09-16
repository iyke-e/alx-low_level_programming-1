#include "main.h"
/**
 * main - the entry point
 * Description: prints an integer
 *@n: integer
 * Return: always 0
 */
void print_number(int n)
{
	unsigned int number = n;

	if (n < 0)
	{
		_putchar('-');
		number = number * -1;
	}
	else if (n == 0)
	{
		_putchar('0');
	}

	if ((number / 10) > 0)
	{
		_putchar((num / 10) + '0');
	}
	_putchar((num % 10) + '0');
}
