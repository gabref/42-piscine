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

int	ft_is_prime(int nb);

void 	ft_test(int test, int expect)
{
	int result = ft_is_prime(test);
	if (result == expect)
		green();
	else
		red();
	printf("Test: %d is prime? should be %d: <%d>\n", test, expect, result);
	reset();
}

int main(void)
{
	ft_test(0, 0);
	ft_test(1, 0);
	ft_test(-432, 0);
	ft_test(2, 0);
	ft_test(3, 1);
	ft_test(729, 0);
	ft_test(37, 1);
	ft_test(73, 1);
	return (0);
}
