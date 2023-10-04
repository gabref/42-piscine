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

int	ft_find_next_prime(int nb);

void 	ft_test(int test, int expect)
{
	int result = ft_find_next_prime(test);
	if (result == expect)
		green();
	else
		red();
	printf("Test: %d next prime should be %d: <%d>\n", test, expect, result);
	reset();
}

int main(void)
{
	ft_test(0, 2);
	ft_test(1, 2);
	ft_test(-432, 2);
	ft_test(2, 2);
	ft_test(3, 3);
	ft_test(729, 733);
	ft_test(34, 37);
	ft_test(72, 73);
	return (0);
}
