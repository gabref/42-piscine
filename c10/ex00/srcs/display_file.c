/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galves-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 11:11:18 by galves-f          #+#    #+#             */
/*   Updated: 2023/10/10 11:33:37 by galves-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/file_reader.h"

int	ft_display_file(char *file)
{
	int		fd;
	int		r;
	char	c;

	fd = open(file, 0);
	if (fd == -1)
		return (-1);
	r = 1;
	while (r > 0)
	{
		r = read(fd, &c, 1);
		if (r == -1)
			return (-1);
		write(1, &c, 1);
	}
	close(fd);
	return (0);
}
