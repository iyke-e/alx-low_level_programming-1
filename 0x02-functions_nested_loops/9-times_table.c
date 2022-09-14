#include "main.h"
/**
 *times_table - main point
 *Description: prints the 9 times table
 *Return: always zero
 */
void times_table(void)
{
	int A; //num 1
	int B; //num 2
	int C; //product of num 1 and num 2

	for (A = 0; A < 10; A++) //print 0-9 for num 1
	{
		for (B = 0; B < 10; B++) //print 0-9 for num 2
		{
			C = A * B; // find the product of the two digits
			if (C / 10 != 0) // when the product of the two num is a two digit 
			{
				if (B != 0) // and the second num is not 0
				{
					_putchar (','); //add comma 
					_putchar (' '); // and space
				}
				_putchar (C / 10 + '0'); //in the output write out the first digit
				_putchar (C % 10 + '0'); //followedd by the second digit
			}
			else
			{
				if (B != 0) // if the second number is not 0 write comma and give two space
				{
					_putchar (',');
					_putchar (' ');
					_putchar (' ');
				}
				_putchar (C  + '0'); // then print the result of the multiplication
			}
		}
		_putchar('\n'); // and add space
	}
}
