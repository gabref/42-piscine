#include <stdio.h>

int main(void)
{
    int tab[3];
    int *tab_2[2];
    int *ptr;

    tab[0] = 478;
    tab[1] = 145;
    tab[2] = 42;
    tab_2[1] = tab;
    tab_2[1][2] = 18;
    *(tab_2[1] + 2) = 18;
    *(*(tab_2 + 1) + 2) = 18;

    printf("%d\n", *tab);
    printf("%d\n", *(tab + 1));
    printf("%p\n", tab);

    printf("\n");
    printf("%d\n", *(tab + 2));

    return (0);
}
