#include <stdio.h>
#include <stdlib.h>

int ft_abs(int x)
{
	if (x < 0)
		return -x;
	return x;
}

int 	*ft_range (int start, int end)
{
	int decrement = end - start + 1 > 0 ? 0 : 1;
	int size = ft_abs(end - start) + 1;
	int *arr = (int *) malloc(sizeof(int) * size);
	int i = 0;
	while (i < size)
	{
		arr[i] = start;
		if (decrement)
			start--;
		else
			start++;
		i++;
	}
	return arr;
}

int main(void)
{
	int i = 0;
	int *tab;

	tab = ft_range(1, 5);
	for (int i = 0; i < 5; i++)
		printf("%d ", tab[i]);
	printf("\n");
	tab = ft_range(-1, 2);
	for (int i = 0; i < 4; i++)
		printf("%d ", tab[i]);
	printf("\n");
	tab = ft_range(0, 0);
	for (int i = 0; i < 0; i++)
		printf("%d ", tab[i]);
	printf("\n");
	tab = ft_range(0, -5);
	for (int i = 0; i < 6; i++)
		printf("%d ", tab[i]);
	printf("\n");
}
