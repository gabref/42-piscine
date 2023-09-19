#include <stdio.h>

int main(void) 
{
    int i;

    i = 42;

    printf("%d\n", i++); // 42
    printf("%d\n", --i); // 42
    printf("%d\n", i++ + 1); // 43
    printf("%d\n", --i + 1); // 43
}
