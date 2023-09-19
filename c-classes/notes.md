# C-00
	https://www.youtube.com/playlist?list=PLsDkzOnmud1hv9vRVgEValKf1M6ys9LM_

## Binary
2^   7 6 5 4 3 2 1 0
12 - 0 0 0 0 1 1 0 0 
255  1 1 1 1 1 1 1 1 - 2^8 - 1
in compouters
-1  1 1 1 1 1 1 1 1 - 2^8 - 1
 2^7 - sign - 1 = negative, 0 = positive

valor mais alto
127  = 0 1 1 1 1 1 1 1
-128 = 1 0 0 0 0 0 0 0 -- how many times to get the 0 to get to 1? x + 127 = -1

## Binary Operators

AND - &
OR  - |
XOR - ^
NOT - ~
    - ! not a binary operator
LEF - <<
RIG - >>

c = -128 = 10000000
c >> 4   = 11111000
unsigned c = -128 = 10000000
c >> 4   = 01000000


# C-01
	https://www.youtube.com/playlist?list=PLsDkzOnmud1hw0WO86oNBFavbDgCaBfVU

pointers 

man 2 write

# C-05
	https://www.youtube.com/playlist?list=PLsDkzOnmud1hNGX0nxE4CuidZnLogr1dy

[recursion](./recursion-mul.c)

# C-06
	https://www.youtube.com/playlist?list=PLsDkzOnmud1iy-cDpuUInr0MO8zDoNUDE

[parameters of main](./main-arguments.c)

```c
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
```


# C-07
	https://www.youtube.com/playlist?list=PLsDkzOnmud1gwmOIFgX0sAydZQTkwzGCT

[malloc and free](./malloc-free.c)

# C-08
	https://www.youtube.com/playlist?list=PLsDkzOnmud1indeDUfjKKAhobpvXf5WR2

# C-09
	https://www.youtube.com/playlist?list=PLsDkzOnmud1gIUcdc3dLrIpNWLw7gu1nz

# C-11
	https://www.youtube.com/playlist?list=PLsDkzOnmud1iIc-3CO2vgSNdUJw0l7W0x

# C-12
	https://www.youtube.com/playlist?list=PLsDkzOnmud1iBSGJcUgoUOPPG01idZmnF

# C-13
	https://www.youtube.com/playlist?list=PLsDkzOnmud1g8aSDHd4bDTdXfRNJmxGa4
