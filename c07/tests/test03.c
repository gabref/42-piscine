#include <stdio.h>
#include <stdlib.h>
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

char	*ft_strjoin(int size, char **strs, char *sep);

void 	ft_test(int size, char **strs, char *sep, char *expect)
{
	char *result = ft_strjoin(size, strs, sep);
	if (strcmp(result, expect) == 0)
		green();
	else
		red();
	printf("Test: should be equal: expect <%s> , got <%s>\n", expect, result);
	reset();
	free(result);
}

int main()
{
	char *strs[4];
	strs[0] = "ciao";
	strs[1] = "bella";
	strs[2] = "come";
	strs[3] = "vai";

	ft_test(0, NULL, ",", "");
	ft_test(1, strs, ", ", "ciao");
	ft_test(4, strs, ", ", "ciao, bella, come, vai");
	ft_test(4, strs, "", "ciaobellacomevai");

	strs[0] = "";
	strs[2] = "";
	ft_test(4, strs, "-", "-bella--vai");

	return (0);
}
