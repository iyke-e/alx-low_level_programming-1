#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block
 * Return: If ptr is NULL, then the call is equivalent to malloc(new_size),
 * If new_size is equal to zero and ptr is not NULL,
 * then the call is equivalent to free(ptr). Return NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int i;
	char *ptr_copy, *filler;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	return (new_ptr);
	if (new_size == 0 && ptr != NULL)
		free(ptr);
	return (NULL);

	ptr_copy = ptr;
	new_ptr = malloc(sizeof(*ptr_copy) * new_size);
	if (new_ptr == NULL)
		free(ptr);
	return (NULL);
	filler = new_ptr;
	for (i = 0; i < old_size && i < new_size; i++)
		filler[i] = *ptr_copy++;
	free(ptr);
	return (new_ptr);
}
