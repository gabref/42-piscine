
#include <stdio.h>
#include <string.h>

static void red () {
  printf("\033[1;31m");
}

static void green() {
  printf("\033[1;32m");
}

static void reset () {
  printf("\033[0m");
}

int	ft_ultimate_range(int **range, int min, int max);

void 	ft_test(int test1, int test2)
{
	int **range;
	range = NULL;
	int result = ft_ultimate_range(range, test1, test2);
	if (result == (test2 - test1))
		green();
	else
		red();
	printf("Test: equal\n");
	reset();
}

int main(void)
{
	ft_test(4, 8);
	return (0);
}
