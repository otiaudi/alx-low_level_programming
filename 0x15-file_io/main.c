#include "main.h"

/**
 * main - check the code.
 *
 * @ac: argument count variable.
 *
 * @av: artument variable.
 *
 * Return: Always 0.
 *
 */
int main(int ac, char **av)
{
	ssize_t n;

	if (ac != 2)
	{
		dprintf(2, "Usage: %s filename\n", av[0]);
		exit(1);
	}

	n = read_textfile(av[1], 114);
	printf("\n(printed characters: %li)\n", n);
	n = read_textfile(av[1], 1024);
	printf("\n(printed characters: %li)\n", n);
	return (0);
}
