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

	for (i = 0; i < size; i++)
	{
		diagO += a[(i * size) + i];
		diagT += a[(size - 1) + ((size - 1) * i)];
	}
	printf("%d, %d\n", diagO, diagT);
}
