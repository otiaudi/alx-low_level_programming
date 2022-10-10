#include <stdio.h>
/**
 * main - main function
 *
 * Return: Rturn 0.
 */
int main(void)
{
	int i;
	int sum = 0;

	while (i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum = sum + i;
		}
	i++;
	}
	printf("%d\n", sum);
	return (0);
}
