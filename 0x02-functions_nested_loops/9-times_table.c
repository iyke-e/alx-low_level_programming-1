#include "main.h"
/**
 *times_table - main point
 *Description: prints the 9 times table
 *Return: always zero
 */
void times_table(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int prod = i * j;

			if (prod == 0)
			{
				_putchar('0');
			}
			else if ((prod % 9) != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(prod + '0');
			}
			else
			{
				_putchar (prod  + '0');
			}
		}
		_putchar('\n');
	}
}
