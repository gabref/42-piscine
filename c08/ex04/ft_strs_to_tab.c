/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galves-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 21:34:10 by galves-f          #+#    #+#             */
/*   Updated: 2023/10/10 06:53:57 by galves-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_str_length(char *str)
{
	int	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;
	int		l;

	dest = (char *) malloc(sizeof(char) * (ft_str_length(src) + 1));
	i = 0;
	if (!(dest))
		return (0);
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*array;

	array = (t_stock_str *) malloc(sizeof(t_stock_str) * (ac + 1));
	if (!array)
		return (0);
	i = 0;
	while (i < ac)
	{
		array[i].str = av[i];
		array[i].size = ft_str_length(av[i]);
		array[i].copy = ft_strdup(av[i]);
		i++;
	}
	array[i].str = 0;
	return (array);
}
