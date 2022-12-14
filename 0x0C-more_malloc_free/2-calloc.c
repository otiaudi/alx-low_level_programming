#include "main.h"
#include<stdlib.h>
/**
 * *_calloc - function that allocates memory for an array, using malloc
 * @nmemb: array elements
 * @size: byte for each element
 *
 * Return: If nmemb or size is 0, returns NULL
 *	If malloc fails, returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		ptr[i] = 0;
	return (ptr);
}

