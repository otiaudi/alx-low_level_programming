#include "main.h"
/**
 * _strcmp - Function that compares two strings
 * @s1: string to be compared
 * @s2: string to be compared
 *
 * Return: void.
 */
int _strcmp(char *s1, char *s2)
{
int i = 0, n = 0;

	while (n == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
			break;
		n = *(s1 + i) - *(s2 + i);
		i++;
	}

	return (n);
}
}
