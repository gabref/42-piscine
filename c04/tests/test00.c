#include <stdio.h>

static void red () {
  printf("\033[1;31m");
}

// static void yellow() {
//   printf("\033[1;33m");
// }

static void green() {
  printf("\033[1;32m");
}

static void reset () {
  printf("\033[0m");
}

int 	ft_strlen(char *str);

void 	ft_test(char *test, int expect)
{
	int result = ft_strlen(test);
	if (result == expect)
		green();
	else
		red();
	printf("Test: %s, length should be %d: <%d>\n", test, expect, result);
	reset();
}

int main(void)
{
	char test[10] = "I love 42!";
	int expect = 10;

	ft_test(test, expect);
	ft_test("", 0);
	ft_test("ciao", 4);
	return (0);
}
