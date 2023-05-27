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
* main -entry point of the program
* @ac: -argument count
* @argv: -argument vector
* Return: 0 on success
*/

int main(int ac, char **argv)
{
	/* declare the unused varibales */
	(void) ac;
	(void) argv;

	prompt();
	return (0);
}
