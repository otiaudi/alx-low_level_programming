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
	strcat(*dest, *src, n);
	return (dest);
}
