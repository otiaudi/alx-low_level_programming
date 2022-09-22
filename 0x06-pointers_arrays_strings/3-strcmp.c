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
int i = 0, op = 0;

	while (op == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
			break;
		op = *(s1 + i) - *(s2 + i);
		i++;
	}

	return (op);
}
}
