#include "main.h"

/**
 * prompt - print a prompt in the command line
 *
 * Return:void
 */

void prompt(void)
{
	char *prompt_str = "#cisfun$ ";

	write(STDOUT_FILENO, prompt_str, strlen(prompt_str));
}

/**
 * readline - get user input
 * Return: 0 on success else -1
 */

char readline(void)
{
	char *lineptr = NULL;
	size_t size = 0;
	ssize_t chars = 0;

	chars = getline(&lineptr, &size, stdin);
	if (chars == EOF)
	{
		free(lineptr);
		exit(0);
	}
	if (lineptr == NULL)
	{
		write(STDOUT_FILENO, "\n", 1);
		free(lineptr);
		exit(-1);
	}
	return (lineptr);
}

