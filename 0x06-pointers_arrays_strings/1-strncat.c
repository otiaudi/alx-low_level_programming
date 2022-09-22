#include "main.h"
#include <string.h>
/**
 * *_strncat - function that concatenates two strings
 * @dest:Destination sting.
 * @src:Sources string
 * @n: parameter
 *
 * Return: Return a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; ++i)
		dest[len + i] = src[i];
		dest[len + i] = '\0';
		return (dest);
}
