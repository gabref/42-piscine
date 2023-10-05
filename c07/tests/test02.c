
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

int	ft_ultimate_range(int **range, int min, int max);

int 	ft_check_equal_array(int arr1[], int arr2[], int size)
{
	for (int i = 0; i < size; i++)
		if (arr1[i] != arr2[i])
			return (0);
	return (1);
}

void 	ft_test(int test1, int test2, int *range, int *expect, int size)
{
	int result = ft_ultimate_range(&range, test1, test2);
	if (result == size)
	{
		green();
		if (size > 0) {
			if (ft_check_equal_array(range, expect, size))
				printf("Test: equal size and array\n");
			else 
			{
				red();
				printf("Test: equal size and but different array\n");
			}
		} else
			printf("Test: equal size and NULL array\n");
	}
	else
	{
		red();
		printf("Test: different size: size: %d, result: %d\n", size, result);
	}
	reset();
	free(range);
}

int main(void)
{
	int *range = NULL;
	int test1[] = { 4, 5, 6, 7 };
	int test2[] = { 0 };
	ft_test(4, 8, range, test1, 8 - 4);
	ft_test(5, 5, range, test2, 0);
	ft_test(4, 8, NULL, test1, 4);
	return (0);
}
