/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galves-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 06:28:52 by galves-f          #+#    #+#             */
/*   Updated: 2023/10/11 07:05:15 by galves-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/file_reader.h"

void	tail_repeat(void)
{
	int	r;
	int	b;

	r = 1;
	while (r)
		r = read(0, &b, 1);
}

void	read_file(char *file, int offset, int fd)
{
	int		r;
	int		count_bytes;
	char	buffer;

	r = 1;
	count_bytes = 0;
	while (r)
	{
		r = read(fd, &buffer, 1);
		if (r == -1)
		{
			display_error(file);
			return ;
		}
		count_bytes += r;
		if (count_bytes >= offset)
		{
			ft_putchar(buffer);
		}
	}
}

void	display_content(char *file, int offset, int ac, int current)
{
	int	fd;

	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		display_error(file);
		return ;
	}
	if (ac > 4)
		ft_tailheader(file);
	read_file(file, offset, fd);
	if (close(fd) == -1)
		display_error(file);
	(void) current;
	if (ac > 4 && current < ac - 1)
		ft_putstr(1, "\n");
}
