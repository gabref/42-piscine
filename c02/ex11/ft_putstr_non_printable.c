/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galves-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 03:30:36 by galves-f          #+#    #+#             */
/*   Updated: 2023/09/27 08:59:41 by galves-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static	void	ft_print_hex(int np)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (np > 16)
	{
		ft_print_hex(np / 10);
		ft_print_hex(np % 10);
	}
	else
		ft_putchar(hex[np]);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if ((*str < 32 && *str > 0) || *str == 127)
		{
			ft_putchar('\\');
			if (*str < 16)
				ft_putchar('0');
			ft_print_hex(*str);
		}
		else
			ft_putchar(*str);
		str++;
	}
}
