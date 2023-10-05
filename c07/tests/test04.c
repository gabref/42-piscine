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

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

void 	ft_test(char *nbr, char *base_from, char *base_to, char *expect)
{
	char *result = ft_convert_base(nbr, base_from, base_to);
	if (expect == NULL && result == NULL)
		green();
	else if (strcmp(result, expect) == 0)
		green();
	else
		red();
	printf("Test: %s in %s to %s should be equal: expect <%s> , got <%s>\n", nbr, base_from, base_to, expect, result);
	reset();
	free(result);
}

int main()
{
	ft_test("   +-+-101010", "01", "0123456789", "42");
	ft_test(" -cafez", "0123456789abcdef", "0123456789", "-51966");
	ft_test("7fffffff", "0123456789abcdef", "0123456789", "2147483647");
	ft_test("8fffffff", "0123456789abcdef", "0123456789", "-1879048193");
	ft_test("42", "0123456789", "01", "101010");
	ft_test("-42", "0123456789", "01", "-101010");
	ft_test("101010", "01", "0123456789abcdef", "2a");
	ft_test("101010", " 01", "+0123456789abcdef", NULL);
	ft_test("101010", " jj", "+0123456789abcdef", NULL);
	ft_test("mnmnmn", "nm", "0123456789abcdef", "2a");
	ft_test("10", "01", "0123456789", "2");
	ft_test("2", "0123456789", "0123456789abcdef", "2");
	ft_test("101010", "01", "0123456789abcdef", "2a");
}
