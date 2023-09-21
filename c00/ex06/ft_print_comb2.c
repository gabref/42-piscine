/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galves-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 21:20:35 by galves-f          #+#    #+#             */
/*   Updated: 2023/09/20 21:52:12 by galves-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(int i, int j)
{
	ft_putchar((i / 10) + 48);
	ft_putchar((i % 10) + 48);
	ft_putchar(' ');
	ft_putchar((j / 10) + 48);
	ft_putchar((j % 10) + 48);
	if (!(i == 98 && j == 99))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i < 99)
	{
		j = i + 1;
		while (j < 100)
		{
			ft_print_numbers(i, j);
			j++;
		}
		i++;
	}
}
