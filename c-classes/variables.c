#include <stdio.h>

int main(void) {
    int i;
    char c;
    float f;
    double d;

    long int li;
    long long int lli;
    short int si;

    i = 4;
    c = 'k';
    f = 12.37;
    d = 12.37;

    printf("%lu, %d - %c\n", sizeof(c), c, c);
    printf("%lu, %d\n", sizeof(i), i);
    printf("%lu, %f\n", sizeof(f), f);
    printf("%lu, %f\n", sizeof(d), d);

    printf("%lu, %ld\n", sizeof(li), li);
    printf("%lu, %lld\n", sizeof(lli), lli);
    printf("%lu, %hd\n", sizeof(si), si);

    return 0;
}
