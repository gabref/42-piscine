/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galves-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:43:21 by galves-f          #+#    #+#             */
/*   Updated: 2023/10/02 16:20:54 by galves-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

enum e_prime
{
	is_not_prime,
	is_prime
};

int	ft_sqrt(int n)
{
	int	k;

	if (n < 0)
		return (-1);
	if (n < 2)
		return (1);
	k = 0;
	while (k * k <= n)
		k++;
	return (--k);
}

int	ft_is_prime(int nb)
{
	int	i;
	int	sqrt;

	if (nb < 3)
		return (0);
	sqrt = ft_sqrt(nb);
	i = 2;
	while (i < sqrt)
		if (nb % i++ == 0)
			return (is_not_prime);
	return (is_prime);
}
