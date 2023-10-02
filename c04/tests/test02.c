#include <stdio.h>

static void yellow() {
  printf("\033[1;33m");
}

static void reset () {
  printf("\033[0m");
}

int 	ft_putnbr(int nbr);

void 	ft_test(int test)
{
	yellow();
	ft_putnbr(test);
	printf("\n%d - Test should be equal\n", test);
	reset();
}

int main(void)
{
	ft_test(0);
	ft_test(-42);
	ft_test(-2147483648);
	ft_test(-2147483647);
	ft_test(2147483647);
	return (0);
}
