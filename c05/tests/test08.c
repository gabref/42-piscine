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

int	ft_ten_queens_puzzle(void);

void 	ft_test(int expect)
{
	int result = ft_ten_queens_puzzle();
	if (result == expect)
		green();
	else
		red();
	printf("Test: solutions should be %d: <%d>\n", expect, result);
	reset();
}

int main()
{
	ft_test(724);
	return (0);
}
