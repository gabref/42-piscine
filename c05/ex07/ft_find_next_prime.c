/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galves-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 16:06:17 by galves-f          #+#    #+#             */
/*   Updated: 2023/10/04 13:35:46 by galves-f         ###   ########.fr       */
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

	if (nb < 2)
		return (0);
	sqrt = ft_sqrt(nb);
	i = 2;
	while (i <= sqrt)
		if (nb % i++ == 0)
			return (is_not_prime);
	return (is_prime);
}

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}
