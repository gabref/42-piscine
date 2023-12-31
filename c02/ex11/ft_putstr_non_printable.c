/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galves-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 03:30:36 by galves-f          #+#    #+#             */
/*   Updated: 2023/09/29 09:51:24 by galves-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static	void	ft_print_hex(char byte)
{
	char	c;

	ft_putchar('\\');
	if ((byte / 16) > 9)
		c = 87 + (byte / 16);
	else
		c = 48 + (byte / 16);
	ft_putchar(c);
	if ((byte % 16) > 9)
		c = 87 + (byte % 16);
	else
		c = 48 + (byte % 16);
	ft_putchar(c);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if ((*str < 32 && *str >= 0) || *str == 127)
			ft_print_hex(*str);
		else
			ft_putchar(*str);
		str++;
	}
}
