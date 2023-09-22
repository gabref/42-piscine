#include <stdio.h>

void ft_putchar(char c);

void ft_print_row(int columns, char middle, char start, char end)
{
	int i;

	ft_putchar(start);
	i = 1;
	while (i++ < columns - 1)
		ft_putchar(middle);
	if (columns > 1)
		ft_putchar(end);
	ft_putchar('\n');
}

void rush(int x, int y)
{
	int i;

	i = 0;
	while (i < y && x > 0)
	{
		if (i == 0 || i == y - 1)
			ft_print_row(x, '-', 'o', 'o');
		else 
			ft_print_row(x, ' ', '|', '|');
		i++;
	}
	ft_putchar('\n');
}
