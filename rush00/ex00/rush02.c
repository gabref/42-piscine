#include <stdio.h>

void ft_putchar(char c);

void ft_print_row(int columns, char middle, char start, char end, int is_not_first)
{
	int i;

	if (!is_not_first)
		ft_putchar(start);
	else
		ft_putchar(end);

	i = 1;
	while (i++ < columns - 1)
		ft_putchar(middle);
	if (columns > 1)
	{
		if (!is_not_first)
			ft_putchar(start);
		else
			ft_putchar(end);
	}
	ft_putchar('\n');
}

void rush(int x, int y)
{
	int i;

	i = 0;
	while (i < y && x > 0)
	{
		if (i == 0 || i == y - 1)
			ft_print_row(x, 'B', 'A', 'C', i);
		else 
			ft_print_row(x, ' ', 'B', 'B', i);
		i++;
	}
	ft_putchar('\n');
}
