#include "holberton.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block
 * @ptr: The pointer to the previous memory block
 * @old_size: The size of the old memory block
 * @new_size: The size of the new memory block
 *
 * Return: The pointer to the new memory block otherwise NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int min_size = old_size < new_size ? old_size : new_size;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr)
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
		new_ptr = malloc(new_size);
		if (new_ptr)
		{
			for (i = 0; i < min_size; i++)
				*((int *)new_ptr + i) = *((int *)ptr + i);
			free(ptr);
			return (new_ptr);
		}
		return (NULL);
	}
	else
	{
		new_ptr = malloc(old_size);
		if (new_ptr)
			return (new_ptr);
		new_ptr = malloc(new_size);
		return (new_ptr ? new_ptr : NULL);
	}
}