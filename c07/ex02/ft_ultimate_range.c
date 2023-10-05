/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galves-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:33:26 by galves-f          #+#    #+#             */
/*   Updated: 2023/10/05 05:24:23 by galves-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	old_min;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *) malloc((sizeof(int)) * (max - min));
	if (*range == NULL)
		return (-1);
	i = 0;
	old_min = min;
	while (min <= max)
		*(*range + i++) = min++;
	return (max - old_min);
}
