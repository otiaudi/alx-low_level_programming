nclude "main.h"
/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet
 *
 * Return: x10 a-z
 */
void print_alphabet_x10(void)
{
	int i, count;

	count = 0;
	while (count < 10)
	{
		for (i = 'a'; i < = 'z'; i++)
	{
		-putchar(i);
	}
	count++;
	}
	putchar('n\');
}
