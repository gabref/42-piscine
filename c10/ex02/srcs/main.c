/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galves-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 06:46:04 by galves-f          #+#    #+#             */
/*   Updated: 2023/10/11 07:10:54 by galves-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/file_reader.h"

int	validate_input2(int ac, char **av)
{
	if (ac < 2)
	{
		tail_repeat();
		return (-1);
	}
	else if ((ac == 2 || ac == 3) && ft_strcmp(av[1], "-c") == 0)
	{
		ft_putstr(2, "tail: option requires an argument -- c\n");
		ft_putstr(2, "usage: tail [-F | -f | -r] [-q] [-b #");
		ft_putstr(2, " | -c # | -n #] [file ...]\n");
		return (-1);
	}
	return (0);
}

int	validate_input(char **av)
{
	if (ft_strcmp(av[1], "-c") != 0)
	{
		ft_putstr(2, "tail: illegal option -- ");
		ft_putstr(2, av[1]);
		ft_putstr(2, "\nusage: tail [-F | -f | -r] [-q] [-b # | -c #");
		ft_putstr(2, " | -n #] [file ...]\n");
		return (-1);
	}
	else if (ft_atoi(av[2]) < 0)
	{
		ft_putstr(2, "tail: illegal offset -- ");
		ft_putstr(2, av[2]);
		ft_putstr(2, "\n");
		return (-1);
	}
	return (0);
}

int	main(int ac, char **av)
{
	int	bytes;
	int	i;

	if (validate_input2(ac, av) < 0)
		return (0);
	if (validate_input(av) < 0)
		return (0);
	if (ac > 3)
	{
		bytes = ft_atoi(av[2]);
		i = 3;
		while (i < ac)
		{
			display_content(av[i], ft_file_size(av[i]) - bytes + 1, ac, i);
			i++;
		}

	}
	return (0);
}
