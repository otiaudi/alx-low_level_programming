#include "main.h"

/**
 * read_textfile - Reads a file and print it to POSIX standard output.
 *
 * @filename: The file to read from.
 *
 * @letters: number of letters to be read and printed.
 *
 * Return: actual number of letters to be printed or read.
 * 0 if file not open or read
 * 0 if filename is NULL
 * 0 when write fails.
 *
 */


ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;				/*file descriptor*/
	char *buf;			/*buffer where read data is stored*/
	int nrd;			/* variabel to hold newly read characters*/
	int nwr;			/* variable to store output */

	if (!filename)			/*if filename is null*/
		return (0);

	fd = open("filename", O_RDONLY);
	if (fd == -1)
		return (0);

	/*allocate memory to the buf */

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	buf[letters] = '\0';
	nrd = read(fd, buf, letters);
	nwr = write(fd, buf, nrd);

	close(fd);

	free(buf);

	return (nwr);
}
