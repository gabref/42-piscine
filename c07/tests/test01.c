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

int	*ft_range(int min, int max);

void 	ft_test(int test1, int test2, char *expect)
{
	int *result = ft_range(test1, test2);
	if (result)
		green();
	else
		red();
	printf("Test: should be equal %s: <%s>\n", expect, result);
	reset();
}

int main(void)
{
	ft_test("bella ciao 432", "bella ciao 432");
	ft_test("", "");
	ft_test("ciao", "ciao");
	return (0);
}
