/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galves-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:50:36 by galves-f          #+#    #+#             */
/*   Updated: 2023/10/04 13:53:35 by galves-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_sort_by_first(char **str_array, int size)
{
	int		i;
	int		j;
	char	*key;

	i = 2;
	while (i < size)
	{
		key = str_array[i];
		j = i - 1;
		while (j >= 1 && ft_strcmp(key, str_array[j]) < 0)
		{
			str_array[j + 1] = str_array[j];
			j--;
		}
		str_array[j + 1] = key;
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	ft_sort_by_first(argv, argc);
	i = 1;
	while (i < argc)
		ft_putstr(argv[i++]);
	return (0);
}
