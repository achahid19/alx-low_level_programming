#include "main.h"

/**
*create_file - create a file
*@filename: pointer to the filename to create
*@text_content: NULL terminated string to write to the file
*Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int f, num = 0, c;

	if (filename == NULL)
		return (-1);
	f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (f == -1)
		return (-1);
	if (text_content == 0)
		text_content = "";
	while (text_content[num])
		num++;
	c = write(f, text_content, num);
	if (c == -1)
		return (-1);
	close(f);
	return (1);
}
