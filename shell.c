#include "shell.h"

int main(void)
{
	char *command = NULL;

	while (1)
	{
		if (!show_prompt(&command))
			continue;
		printf("you typed: %s\n", command);
	}

	free(command);
	return (0);
}
