#include <stdio.h>
/**
 * main - entry block
 * @void: no argument
 * Return: 0
 **/
int main(void)
{
	int num, sum;

	for (num = 0; num < 100; num++)
	{
		putchar((i / 10) + '0');
		putchar((i % 10) + '0');

		if (sum < 99)
		{
			putchar(',');
			putchar(' ');
		}

		sum++;
	}
	putchar('\n');
	return (0);
}
