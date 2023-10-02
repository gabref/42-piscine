#include <stdio.h>

static void yellow() {
  printf("\033[1;33m");
}

static void reset () {
  printf("\033[0m");
}

void 	ft_putstr(char *str);

void 	ft_test(char *test)
{
	yellow();
	printf("%s\n Test should write string", test);
	ft_putstr(test);
	printf("\n");
	reset();
}

int main(void)
{
	char test[10] = "I love 42!";

	ft_test(test);
	ft_test("");
	ft_test("ciao");
	return (0);
}
