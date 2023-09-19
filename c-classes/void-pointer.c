#include <stdio.h>

int main(void)
{
    void *ptr;
    int *ptr_i;
    char *ptr_c;

    ptr = ptr_c;
    ptr = &ptr;
    ptr = ptr_i;
    ptr_c = ptr;

    return (0);
}
