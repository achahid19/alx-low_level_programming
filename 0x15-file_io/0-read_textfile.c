#include "main.h"

/**
 * read_textfile - function that reads a text file
 * and prints it to the POSIX stdout
 * filename: pointer to the filename
 * letters: number of letters that could be read and print
 * Return: number of letters it could read and print, otherwise 0
 */
 ssize_t read_textfile(const char *filename, size_t letters)
 {
	int fo;
	char *pf;
	ssize_t n_letters;

	if (filename == NULL)
		return (0);
	pf = malloc(sizeof(*filename) * letters + 1); /* 1 for null byte */
	if (pf == NULL)
		return (0);
	fo = open(filename, O_RDONLY);
	if (fo == -1)
	{
		free(pf);
		return (0);
	}
	n_letters = read(fo, pf, sizeof(*filename) * letters);
	if (n_letters == -1)
	{
		free(pf);
		close(fo);
		return (0);
	}
	n_letters = write(STDOUT_FILENO, pf, n_letters);
	if (n_letters == 1)
	{
		free(pf);
		close(fo);
		return (0);
	}
	free(pf);
	close(fo);
	return (n_letters);
 }
