#include "main.h"

/**
 * append_text_to_file - This function appends contents to text files
 * @filename: a pointer to the file to be created
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, else -1 on failure
 */


int append_text_to_file(const char *filename, char *text_content)
{
	char *buf_size = malloc(sizeof(text_content));
	int fp;
	int wr;

	fp = open(filename, O_WRONLY | O_APPEND, 0600);
	if (fp == -1)
		return (-1);

	if (filename == NULL)
		return (-1);

	wr = write(fp, text_content, *buf_size);
	if (wr == -1)
		return (-1);

	return (1);
}
