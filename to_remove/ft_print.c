#include "shell.h"

void leo_print(const char *message) {
    write(STDOUT_FILENO, message, strlen(message));
}
