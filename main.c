#include "main.h"


int main(int argc, char **argv)
{
	string command = NULL, prog_name = NULL;
	int i;

	(void)argc;
	prog_name = argv[0];

	while (TRUE)
	{
		if (!prompt(&command))
			continue;
		argv = set_args(command);
		if (argv)
		{
			if (cmd_set_unset_env(argv))
				continue;
			if (cmd_change_directory(argv))
				continue;
			execmd(prog_name, argv);
			if (argv)
			{
				for (i = 0; argv[i] != NULL; i++)
				{
					if (argv[i])
					{
						free(argv[i]);
					}
					continue;
				}

				free(argv);
			}
		}
	}

	free(command);
	return (0);
}
