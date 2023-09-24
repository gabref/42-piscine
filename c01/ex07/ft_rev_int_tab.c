/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galves-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 14:56:39 by galves-f          #+#    #+#             */
/*   Updated: 2023/09/24 18:16:35 by galves-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap2(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size / 2)
	{
		ft_swap2(&tab[i], &tab[size - i - 1]);
		i++;
	}
}
