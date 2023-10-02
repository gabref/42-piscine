#include <stdio.h>

static void yellow() {
  printf("\033[1;33m");
}

static void reset () {
  printf("\033[0m");
}

void 	ft_putnbr_base(int nbr, char *base);

void 	ft_test(int test, char *test_base, char *expect)
{
	ft_putnbr_base(test, test_base);
	yellow();
	printf("\n%s\nTest: should be equal\n", expect);
	reset();
}

int main(void)
{
	ft_test(42, "01", "101010");
	ft_test(51966, "0123456789abcdef", "cafe");
	return (0);
}
