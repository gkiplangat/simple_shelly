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

