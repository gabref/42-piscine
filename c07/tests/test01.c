#include <stdio.h>
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

int	*ft_range(int min, int max);

int 	ft_check_equal_array(int arr1[], int arr2[], int size)
{
	for (int i = 0; i < size; i++)
		if (arr1[i] != arr2[i])
			return (0);
	return (1);
}

void 	ft_test(int test1, int test2, int expect[])
{
	int *result = ft_range(test1, test2);
	if (ft_check_equal_array(result, expect, test2 - test1))
		green();
	else
		red();
	printf("Test: arrays should be equals\n");
	reset();
}

int main(void)
{
	int test[4] = { 4, 5, 6, 7 };
	ft_test(4, 8, test);
	return (0);
}
