#include "hsh.h"

/**
 * main - Entry point for our simple shell program
 * Return: Always 0 (Success).
*/
int main(void)
{
	char str[1024], *ptr = NULL;
	char *arg[] = {NULL, NULL};
	int flag = 1, get_pid, stat;

	for (;true;)
	{
		ft_disPrompt();
		ptr = fgets(str, sizeof (str), stdin);
		if (ptr == NULL)
			flag = 0;
		switch (flag)
		{
			case 0:
					goto here; /* EOF reached */
			case 1:
					str[strlen(str) - 1] = '\0'; /* delete the new line of fgets */
					arg[0] = str;
					get_pid = fork(); /* create new process */
					if (!get_pid) /* pid == 0 (parent), pid == -1 (fail), pid == 1 (child) */
						execve(str, arg, NULL); /**
											 * we have to create a new process(fork), to prevent end
											 *  of the current process.
											 */
					else if (get_pid > 0)
						wait(&stat); /* wait for child process to finish */		
		}
	}
here:
	return (0);
}
