/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galves-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:15:49 by galves-f          #+#    #+#             */
/*   Updated: 2023/10/10 16:06:41 by galves-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_cat.h"

void	cat_repeat(void)
{
	int	r;
	int	buffer;

	r = 1;
	while (r >= 0)
	{
		r = read(0, &buffer, 1);
		write(1, &buffer, 1);
	}
}

void	cat_display(char *file)
{
	char	buffer;
	int		read_bytes;
	int		fd;

	fd = open(file, 0);
	if (fd == -1)
	{
		display_error(file);
		return ;
	}
	read_bytes = 1;
	while (read_bytes)
	{
		if (read_bytes == -1)
		{
			display_error(file);
			return ;
		}
		read_bytes = read(fd, &buffer, 1);
		write(1, &buffer, 1);
	}
	if (close(fd) == -1)
		display_error(file);
}
