#include "main.h"
/**
 * more_numbers - the entry point
 * Description: 10 times the numbers, from 0 to 14
 * Return: always 0
 */
void more_numbers(void)
{
	int i;
	int rep = 0;

	while (rep < 10)
	{
		for (i = 0; i < 15; i++)
		{
			if (i < 10)
			{
				_putchar(i + '0');
			}
			else
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			}
		}
		_putchar('\n');
		rep++;
	}
}
