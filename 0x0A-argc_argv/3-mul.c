#include<stdio.h>
#include<stdlib.h>
/**
 * main - program that multiplies two numbers
 * @argc: Number of command line argument.
 * @argv: An array that contains program CL args.
 *
 * Return: 0 - Sucess
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (0);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
