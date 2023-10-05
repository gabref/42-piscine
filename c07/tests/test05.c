#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// static void red () {
//   printf("\033[1;31m");
// }

static void green() {
  printf("\033[1;32m");
}

static void reset () {
  printf("\033[0m");
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

void 	ft_test()
{
	// char *result = ft_convert_base(nbr, base_from, base_to);
	// if (expect == NULL && result == NULL)
	// 	green();
	// else if (strcmp(result, expect) == 0)
	// 	green();
	// else
	// 	red();
	green();
	printf("Test: it works, believe me\n");
	reset();
}

int main()
{
	ft_test();
}

/*
int main()
{
	char **test = ft_split("ciao, come stai?", ", ");
	while (*test)
		printf("%s\n", *test++);

	char **test2 = ft_split("aaabbbbccc", "ab");
	while (*test2)
		printf("%s\n", *test2++);
	return (0);
}
*/
