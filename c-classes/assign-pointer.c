#include <stdio.h>

int main(void)
{
    int a;
    int b;
    int c;
    int *ptr;
    int **ptrp;

    ptr = &a;
    printf("%p\n", ptr);
    ptr = &b;
    printf("%p\n", ptr);
    ptr = &c;
    printf("%p\n", ptr);
    ptrp = &ptr;
    printf("%p\n", ptrp);

    printf("*ptr %d\n", *ptr);
    *ptr = 42;
    printf("b %d\n", c);

    return (0);
}
