/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galves-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:19:47 by galves-f          #+#    #+#             */
/*   Updated: 2023/10/02 15:43:10 by galves-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb < 1)
		return (0);
	while ((i * i) < nb)
		i++;
	if (nb % (i * i) == 0)
		return (i);
	return (0);
}
