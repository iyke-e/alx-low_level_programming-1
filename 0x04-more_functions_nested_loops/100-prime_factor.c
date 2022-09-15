#include "main.h"
#include <stdio.h>
/**
 * main - the entry point
 * Description: prime factor
 * Return: always 0
 */
int main(void)
{
	unsigned long num = 612852475143;
	unsigned long quotient = num;
	unsigned int divisor = 2;

	/**
	 * taking the number first modulate it by 2 (the first prime no)
	 * if it is divisible i.e 0; the number is divided by 2 to get the
	 * next number to further back down,
	 * if it is not divisible by 2, increment to the next number and repeat
	 * until we get the divisor equal to the quotient
	 */

	while (quotient != divisor)
	{
		if ((quotient % divisor) == 0)
		{
			quotient = quotient / divisor;
		}
		else
		{
			divisor++;
		}
	}
	printf("%lu\n", quotient);
	return (0);
}
