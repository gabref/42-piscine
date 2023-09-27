/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galves-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 04:01:59 by galves-f          #+#    #+#             */
/*   Updated: 2023/09/27 09:17:49 by galves-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

typedef unsigned char	t_byte;

void	ft_putcharr(char c)
{
	write(1, &c, 1);
}

void	ft_print_byte_hex(t_byte byte)
{
	// if ((byte / 16) < 10)
	// 	ft_putchar(48 + (byte / 16));
	// else
	// 	ft_putchar(87 + (byte / 16));
	// if ((byte % 16) < 10)
	// 	ft_putchar(48 + (byte % 16));
	// else
	// 	ft_putchar(87 + (byte % 16));
	int	_4_upper_bits;
	int	_4_lower_bits;

	_4_upper_bits = (byte & 0b11110000) >> 4;
	_4_lower_bits = byte & 0b00001111;
	if (_4_upper_bits < 10)
		ft_putcharr(48 + _4_upper_bits);
	else
		ft_putcharr(87 + _4_upper_bits);
	if (_4_lower_bits < 10)
		ft_putcharr(48 + _4_lower_bits);
	else
		ft_putcharr(87 + _4_lower_bits);
}

void	ft_print_address_hex(void *s)
{
	int		little_endian;
	t_byte	*ptr_byte;

	ptr_byte = (t_byte *) &s;
	little_endian = 7;
	while (little_endian >= 0)
	{
		ft_print_byte_hex(*(ptr_byte + little_endian));
		little_endian--;
	}
	ft_putcharr(':');
}

void	ft_print_str_hex(void *str, unsigned int size, short limit)
{
	int	i;

	i = 0;
	while (--size && limit--)
	{
		if (!(i % 2))
			ft_putcharr(' ');
		ft_print_byte_hex(*((t_byte *)str + i));
		i++;
	}
	ft_putcharr(' ');
	if (i % 2)
		ft_putcharr(' ');
	while (limit-- > 0)
	{
		ft_putcharr(' ');
		ft_putcharr(' ');
		if (i++ % 2)
			ft_putcharr(' ');
	}
}

void	ft_print_content_dot(void *str, unsigned int size, short limit)
{
	while (--size && limit--)
	{
		if (*(char *)str >= 32 && *(char *)str < 127)
			ft_putcharr(*((char *)str));
		else
			ft_putcharr('.');
		str++;
	}
	while (limit-- > 0)
	{
		ft_putcharr(' ');
	}
	ft_putcharr('\n');
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	int	limit;

	limit = 16;
	if (size == 1)
		return (addr);
	ft_print_address_hex(addr);
	ft_print_str_hex(addr, size, limit);
	ft_print_content_dot(addr, size, limit);
	return (addr);
}
