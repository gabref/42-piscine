/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galves-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 06:20:43 by galves-f          #+#    #+#             */
/*   Updated: 2023/10/11 06:28:45 by galves-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/file_reader.h"

void	ft_tailheader(char *filename)
{
	ft_putstr(1, "==> ");
	ft_putstr(1, filename);
	ft_putstr(1, " <==\n");
}

void	display_error(char *file)
{
	ft_putstr(2, "tail: ");
	ft_putstr(2, file);
	ft_putstr(2, ": ");
	ft_putstr(2, strerror(errno));
	ft_putstr(2, "\n");
	errno = 0;
}

int	ft_file_size(char *file)
{
	int		fd;
	int		r;
	int		file_size;
	char	buffer;

	file_size = 0;
	fd = open(file, 0);
	if (fd == -1)
		return (-1);
	r = 1;
	while (r)
	{
		r = read(fd, &buffer, 1);
		if (r == -1)
			return (-1);
		file_size += r;
	}
	if (close(fd) == -1)
		return (-1);
	return (file_size);
}
