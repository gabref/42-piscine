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

int	ft_iterative_power(int nb, int power);

void 	ft_test(int test, int power, int expect)
{
	int result = ft_iterative_power(test, power);
	if (result == expect)
		green();
	else
		red();
	printf("Test: %d^%d should be equal %d: <%d>\n", test, power, expect, result);
	reset();
}

int main(void)
{
	ft_test(0, 1, 0);
	ft_test(1, 0, 1);
	ft_test(123, 0, 1);
	ft_test(27, 2, 729);
	ft_test(-12, 2, 144);
	ft_test(-3, 3, -27);
	ft_test(2, 10, 1024);
	return (0);
}
