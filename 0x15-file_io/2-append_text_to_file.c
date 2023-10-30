#include "main.h"

/**
*append_text_to_file - appends text at the end of a file
*@filename: pointer to the filename
*@text_content: NULL terminated string to add at the end of the file
*Return: 1 on success, otherwise -1
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int num = 0, f, c;

	if (filename == NULL)
		return (-1);
	f = open(filename, O_WRONLY | O_APPEND);
	if (f == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[num])
			num++;
		c = write(f, text_content, num);
		if (c == -1)
			return (-1);
	}
	close(f);
	return (1);
}
