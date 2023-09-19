#include <stdio.h>

int mul(int a, int b)
{

    if (b == 0)
        return 0;

    if (b < 0)
        return -a + mul(a, b + 1);
    return a + mul(a, b - 1);

    // int ret;

    // ret = 0;
    // while (b != 0)
    // {
    //     if (b < 0)
    //     {
    //         ret -= a;
    //         b++;
    //     }
    //     else 
    //     {
    //         ret += a;
    //         b--;
    //     }
    // }
    // return (ret);
}

int main(void)
{
    printf("%d\n", mul(4, -10));
    return (0);
}
