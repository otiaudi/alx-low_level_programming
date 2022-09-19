#include "main.h"
/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase
 *
 * Return: always succcessful
 */
void print_alphabet_x10(void)
{
	int count = 0;
	int i;

	while (count < 10)
	{
		for (i = '97'; i < '122'; i++)
		{
			_putchar(i);
		}
	count++;
	}
	_putchar('\n');
	return (0);
}

