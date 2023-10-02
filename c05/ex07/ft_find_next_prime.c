/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galves-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 16:06:17 by galves-f          #+#    #+#             */
/*   Updated: 2023/10/02 16:27:25 by galves-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	root;

	if (nb < 1)
		return (0);
	if (nb < 3)
		return (1);
	root = 0;
	while (root * root < nb)
		root++;
	return (root);
}

int	ft_is_prime(int nb)
{
	int	sqrt;
	int	i;

	if (nb < 3)
		return (0);
	i = 2;
	sqrt = ft_sqrt(nb);
	while (i < sqrt)
		if (nb % i++ == 0)
			return (0);
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}
