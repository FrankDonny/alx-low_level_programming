#include "main.h"

/**
 * main - program to copy file's content to another
 * @argc: counts the number of arguments added
 * @argv: contains the command line arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int rd, wr, file_from, file_to;
	char *buf_size;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	/*read first file*/
	file_from = open(argv[1], O_RDONLY);
	/*if (!file_from || file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}*/

	buf_size = malloc(sizeof(char) * 1024);
	
	rd = read(file_from, buf_size, 1024);
	if (rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	/*write to second file*/
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	/*if (!file_to || file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}*/

	wr = write(file_to, buf_size, rd);
	if (wr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	close(file_from);
	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd%d\n", file_from);
		exit(100);
	}
	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", file_to);
		exit(100);
	}

	return (wr);

	return (0);
}
