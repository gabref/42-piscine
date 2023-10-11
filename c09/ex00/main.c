#include "ft.h"
#include <stdio.h>

int main()
{

	printf("should print, abc\n");
	ft_putchar('a');
	ft_putchar('b');
	ft_putchar('c');
	
	int a = 5;
	int b = 10;
	ft_swap(&a, &b);
	printf("\n5, 10, should be 10, 5: %d, %d\n", a, b);

	printf("\nshould print <ciao come stai>\n");
	ft_putstr("ciao come stai\n");

	printf("\nlength of string should be 5: %d\n", ft_strlen("hello"));

	printf("\nstrcmp should be 0: %d\n", ft_strcmp("ciao bella", "ciao bella"));
	return (0);
}
