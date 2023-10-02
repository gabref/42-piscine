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

int 	ft_atoi(char *str);

void 	ft_test(char *test, int expect)
{
	int result = ft_atoi(test);
	if (result == expect)
		green();
	else
		red();
	printf("Test: value should be %d: <%d>\n", expect, result);
	reset();
}

int main(void)
{
	ft_test("I love 42!", 0);
	ft_test("", 0);
	ft_test("32ciao", 32);
	ft_test("  -+--42124asfsad", -42124);
	ft_test("  -+--  42124asfsad", 0);
	return (0);
}
