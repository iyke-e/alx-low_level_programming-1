#include "main.h"
/**
 * print_diagsums - the main entry point
 * Description: function that the sum of the two diagonals of
 * a square matrix of integers
 * @a: array of arrays
 * @size: size of array diagonally
 * Return: diagonal sum
 */
void print_diagsums(int *a, int size)
{
	int i;
	int diagO = 0;
	int diagT = 0;

	int i, j, sum1 = 0, diagT = 0;

	for (i = 0; i < (size * size); i += size + 1)
	{
		diagO += a[i];
	}
	for (j = size - 1; j < (size * size) - 1; j += size - 1)
	{
		diagT += a[j];
	}
	printf("%d, %d\n", sum1, diagT);
}
