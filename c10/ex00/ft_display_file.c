/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galves-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 21:43:09 by galves-f          #+#    #+#             */
/*   Updated: 2023/10/09 22:42:51 by galves-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

void	ft_putstr(char *str, int std)
{
	while (*str)
		write(std, str++, 1);
}

int	ft_display_file(char *file)
{
	int		fd;
	int		r;
	char	c;

	fd = open(file, 0);
	if (fd == -1)
		return (-1);
	while ((r = read(fd, &c, 1)))
	{
		if (r == -1)
			return (-1);
		write(1, &c, 1);
	}
	close(fd);
	return (0);
}

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
