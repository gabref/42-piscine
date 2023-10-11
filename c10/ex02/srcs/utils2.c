/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galves-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 06:08:56 by galves-f          #+#    #+#             */
/*   Updated: 2023/10/11 07:13:41 by galves-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/file_reader.h"

void	ft_putchar(char c) {
	write(1, &c, 1);
}

void	ft_putstr(int fd, char *str)
{
	while (*str)
		write(fd, str++, 1);
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int		inside_str(char c, char *str)
{
	while (*str)
		if (*str++ == c)
			return (1);
	return (0);
}

int		ft_atoi(char *str)
{
	int	result;
	int	is_valid;

	result = 0;
	is_valid = 0;
	while (inside_str(*str, " \t\n\r\v\f"))
		str++;
	while (inside_str(*str, "+-"))
		str++;
	while (*str >= '0' && *str <= '9')
	{
		is_valid = 1;
		result = (result * 10) + (*str++ - 48);
	}
	if (!is_valid)
		return (-1);
	return (result);
}
