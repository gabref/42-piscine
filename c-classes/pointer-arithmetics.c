#include <stdio.h>

int main(void)
{
    int a;
    int b;
    int *ptr;

    b = 23;
    ptr = &a;
    printf("%p\n", ptr);
    printf("%p\n", ptr + 1);
    printf("%p\n", &b);
    printf("%d\n", *(ptr + 1));

    *(ptr + 1) = 42;
    printf("%d\n", b);

    return (0);
}
