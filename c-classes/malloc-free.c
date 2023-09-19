#include <stdio.h>
#include <stdlib.h>

int *get()
{
    int *tab;

    tab = malloc(sizeof(*tab) * 9);

    return (tab);
}

int *set()
{
    int lol;

    lol = 78;
    return (0);
}

int main(void)
{
    int *ptr;

    ptr = get();
    *ptr = 19;
    printf("%d\n", *ptr);
    set();
    printf("%d\n", *ptr);
    printf("%p\n", ptr);
    free(ptr);
    printf("%p\n", ptr);

    return (0);
}
