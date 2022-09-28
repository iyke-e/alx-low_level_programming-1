#include "main.h"
/**
 * _sqrt_recursion - the main entry point
 * Description: returns natural square root of a number.
 * @n: integer
 * Return: 0 always success
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (find_sqrt(n, root));
}

/**
 * find_sqrt - the main entry point
 * Description: returns natural square root of a number.
 * @num: integer
 * @root: integer
 * Return: 0 always success
 */
int find_sqrt(int num, int root)
{
	if ((num / root == root))
		return (root);
	if (root == (num / 2))
		return (-1);
	return (find_sqrt(num, root + 1));
}
