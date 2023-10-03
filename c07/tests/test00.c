#include <stdio.h>
#include <string.h>

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

char	*ft_strdup(char *src);

void 	ft_test(char *test, char *expect)
{
	char *result = ft_strdup(test);
	if (strcmp(result, expect) == 0)
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
