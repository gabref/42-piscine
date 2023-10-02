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

int 	ft_atoi_base(char *str, char *base);

void 	ft_test(char *test, char *test_base, int expect)
{
	int result = ft_atoi_base(test, test_base);
	if (result == expect)
		green();
	else
		red();
	printf("Test: should be equal %d: <%d>\n", expect, result);
	reset();
}

int main(void)
{
	ft_test("101010", "01", 42);
	ft_test("-cafe", "0123456789abcdef", -51966);
	ft_test("", "0123456789abcdef", 0);
	ft_test("4324", "01 3456789 ab", 0);
	ft_test("342", "013456789a+b", 0);
	return (0);
}
