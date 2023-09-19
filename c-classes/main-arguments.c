#include <stdio.h>

int main(int argc, char **argv, char **env)
{
    (void) argc;
    (void) argv;
    (void) env;
    printf("Number of arguments: %d\n", argc);
    printf("Value of argument 1: %s\n", argv[0]);
    printf("Value of argument 2: %s\n", argv[1]);

    char *str = argv[1];
    printf("Copied arg 1: %s\n", str);

    printf("env? %s\n", env[0]);

    return (0);
}
