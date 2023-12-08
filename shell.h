#ifndef _SHELL_H
#define _SHELL_H

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

int show_prompt(char **command);

#endif
