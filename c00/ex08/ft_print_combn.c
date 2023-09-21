/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galves-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 22:32:30 by galves-f          #+#    #+#             */
/*   Updated: 2023/09/20 23:58:27 by galves-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_combination(int arr[], int n)
{
	int	i;

	i = 0;
	while (i < n)
		ft_putchar(arr[i++] + 48);
}

void	ft_generate_combinations(int arr[], int n, int index, int current_digit)
{
	int	i;

	i = current_digit;
	if (index == n)
	{
		ft_print_combination(arr, n);
		if (arr[0] != 10 - n)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		return ;
	}
	while (i <= 9)
	{
		arr[index] = i;
		ft_generate_combinations(arr, n, index + 1, i++ + 1);
	}
}

void	ft_print_combn(int n)
{
	int	arr[9];

	if (n < 1 || n > 9)
		return ;
	ft_generate_combinations(arr, n, 0, 0);
}
