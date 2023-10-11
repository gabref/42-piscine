/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galves-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:16:21 by galves-f          #+#    #+#             */
/*   Updated: 2023/10/10 15:27:23 by galves-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_cat.h"

void	ft_putstr(int fd, char *str)
{
	while (*str)
		write(fd, str++, 1);
}

void	display_error(char *file)
{
	ft_putstr(2, "cat: ");
	ft_putstr(2, file);
	ft_putstr(2, ": ");
	ft_putstr(2, strerror(errno));
	ft_putstr(2, "\n");
	errno = 0;
}
