#include <stdio.h>

static void red () {
  printf("\033[1;31m");
}

static void green() {
  printf("\033[1;32m");
}

static void reset () {
  printf("\033[0m");
}

int	ft_fibonacci(int index);

void 	ft_test(int test, int expect)
{
	int result = ft_fibonacci(test);
	if (result == expect)
		green();
	else
		red();
	printf("Test: Fib %d should be equal %d: <%d>\n", test, expect, result);
	reset();
}

int main(void)
{
	ft_test(0, 0);
	ft_test(1, 1);
	ft_test(2, 1);
	ft_test(3, 2);
	ft_test(4, 3);
	ft_test(5, 5);
	ft_test(6, 8);
	ft_test(7, 13);
	ft_test(8, 21);
	ft_test(9, 34);
	ft_test(10, 55);
	return (0);
}
