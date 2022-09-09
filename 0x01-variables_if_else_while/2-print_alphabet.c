#include <stdio.h>
/**
 * main - Print alphabetical letters
 *
 * Description: using the main function
 *
 * Rturn: Always 0.
 */
int main(void)
{
	char ch1;

	for (ch1 = 'a'; ch1 <= 'z'; ch1++)
	{
	putchar(ch1);
	}
	putchar('\n');
	return (0);
}
