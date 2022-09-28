#include "main.h"
/**
 * factorial - the main entry point
 * Description: prints the factorial of a given number.
 * @n: integer
 * Return: 0 always sucess
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
