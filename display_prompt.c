#include "shell.h"

int show_prompt(char **command)
{
	ssize_t n = 0;
	size_t len = 0;
	size_t input_length = 0;

	if (isatty(0))
		printf("$ ");
	n = getline(command, &len, stdin);
	if (n == EOF)
	{
		free(*command);
		exit(EXIT_SUCCESS);
	}

	input_length = strlen(*command);
	if (input_length > 0 && (*command)[input_length -1] == '\n')
	{
		(*command)[input_length - 1] = '\0';
	}

	if (strcmp(*command, "") == 0)
	{

		free(*command);
		return (0);
	}

	return (1);
}
