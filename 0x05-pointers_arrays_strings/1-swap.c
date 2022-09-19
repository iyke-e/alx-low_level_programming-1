#include "main.h"
/**
 * swap_int - the entry point
 *
 * Description: points to an integer
 *
 * @a: pointer integer
 * @b: pointer integer
 *
 * Return: always 0
 */
void swap_int(int *a, int *b)
{
	/* the deferenced value of a and b into other variables */
	int a_value = *a;
	int b_value = *b;

	/* swapping */
	*a = b_value;
	*b = a_value;
}
