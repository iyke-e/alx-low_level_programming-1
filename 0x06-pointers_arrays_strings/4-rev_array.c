#include "main.h"
/**
 * reverse_array - the entry point
 * Description: reverses the content of an array of integers.
 * @a: integer pointer
 * @n: number of elements of the array
 * Return: always 0
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	n--;
	for (i = 0; i < n; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
