/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galves-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 19:46:31 by galves-f          #+#    #+#             */
/*   Updated: 2023/10/03 22:14:13 by galves-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int i;
	int *range;

	if (min - max < 1)
		return (NULL);
	range = (int *) malloc(sizeof(int) * (max - min));
	if (range == NULL)
		return (range);
	i = 0;
	while (min < max)
		*(range + i++) = min++;
	return (range);
}
