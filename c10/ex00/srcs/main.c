/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galves-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 21:43:09 by galves-f          #+#    #+#             */
/*   Updated: 2023/10/10 11:33:42 by galves-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/file_reader.h"

int	main(int ac, char **av)
{
	if (ac == 1)
		ft_putstr("File name missing.\n", 2);
	else if (ac > 2)
		ft_putstr("Too many arguments\n", 2);
	else
	{
		if (ft_display_file(av[1]) < 0)
			ft_putstr("Cannot read file.\n", 2);
	}
	return (0);
}
