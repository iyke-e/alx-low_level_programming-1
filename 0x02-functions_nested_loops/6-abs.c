#include "main.h"
/**
 *_abs - main entry
 *Description: the absolute value of an integer
 *@n: number to compare
 *Return: always zero
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
