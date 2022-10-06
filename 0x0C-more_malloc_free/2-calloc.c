#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_calloc - allocates memory for an array, using malloc
 * @nmemb: length of memory to allocate
 * @size: cast type size
 * Return: If nmemb or size is 0, then _calloc returns NULL
 * If malloc fails, then _calloc returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *mem;

	if (nmemb == 0 || size == 0)
		return (NULL);
	/* takes in the size and the sizeof(cast type) */
	mem = malloc(size * nmemb);

	if (mem == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (nmemb * size); i++)
	{
		mem[i] = 0;
	}

	return (mem);
}
