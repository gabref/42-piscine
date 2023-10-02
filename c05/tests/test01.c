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

int	ft_recursive_factorial(int nb);

void 	ft_test(int test, int expect)
{
	int result = ft_recursive_factorial(test);
	if (result == expect)
		green();
	else
		red();
	printf("Test: %d! should be equal %d: <%d>\n", test, expect, result);
	reset();
}

int main(void)
{
	ft_test(0, 1);
	ft_test(1, 1);
	ft_test(5, 120);
	ft_test(3, 6);
	ft_test(-1, 0);
	return (0);
}
