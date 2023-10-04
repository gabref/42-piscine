#include <stdio.h>
#include <limits.h>

static void red () {
  printf("\033[1;31m");
}

static void green() {
  printf("\033[1;32m");
}

static void reset () {
  printf("\033[0m");
}

int	ft_sqrt(int nb);

void 	ft_test(int test, int expect)
{
	int result = ft_sqrt(test);
	if (result == expect)
		green();
	else
		red();
	printf("Test: sqrt(%d) should be equal %d: <%d>\n", test, expect, result);
	reset();
}

int main(void)
{
	ft_test(0, 0);
	ft_test(-32, 0);
	ft_test(1, 1);
	ft_test(2, 0);
	ft_test(144, 12);
	ft_test(729, 27);
	ft_test(730, 0);
	ft_test(INT_MAX, 0);
	return (0);
}
