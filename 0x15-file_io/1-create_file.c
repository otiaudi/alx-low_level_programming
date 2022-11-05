#include "main.h"

/**
 * create_file - A function that creates a file.
 *
 * @filename: The name of the file to create.
 * @text_content: NULL terminating string to write to the file.
 *
 * Return: 1 on success and -1 on faillure
 * and returns -1 when filename is NULL.
 *
 */

int create_file(const char *filename, char *text_content)
{
	int file1;		/*file descriptor*/
	int count;		/* for looping throught the string*/
	int nwr;		/* variable to store the result of write*/

	if (!filename)
		return (-1);

	file1 = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file1 == -1)
		return (-1);

	if (!text_content)
		text_content = " ";

	for (count = 0; text_content[count]; count++)
		;
	nwr = write(file1, text_content, count);
	if (nwr == -1)
		return (-1);

	close(file1);
	return (1);
}
