/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galves-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 21:13:37 by galves-f          #+#    #+#             */
/*   Updated: 2023/10/05 21:47:54 by galves-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	int		i;
	char	*cpy;

	i = -1;
	cpy = (char *) malloc(sizeof(char) * ft_strlen(str));
	if (cpy == NULL)
		return (0);
	while (str[++i])
		cpy[i] = str[i];
	cpy[i] = '\0';
	return (cpy);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str *stock;
	int i;

	stock = (t_stock_str *) malloc(sizeof(t_stock_str) * (ac + 1));
	if (stock == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		stock[i].size = ft_strlen(av[i]);
		stock[i].str = av[i];
		stock[i].copy = ft_strdup(av[i]);
		i++;
	}
	stock[i].str = 0;
	stock[i].copy = 0;
	return (stock);
}
