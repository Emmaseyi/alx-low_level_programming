#include "main.h"
#include <stdlib>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to previously allocate memory
 * @old_size: size of allocated space for ptr
 * @new_size: size of new allocated space for
 * Return: a pointer new allocated space, or NULL if it fails
 * /
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size
{
        char *r;
        unsigned int i, max = new_size;
	char *f = ptr;

	if (ptr == NULL)
	{
		r = malloc(new_size);
		return (r);
	}
	else if
	(new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if
	(new_size == old_size)

	r = malloc(new_size);
	if (r == NULL)
		return (NULL);
	if (new_size > old_size
		max old_size;
	for ( i = 0; i < max; i++)
		p[i] = f[i];
	free(ptr);
}
