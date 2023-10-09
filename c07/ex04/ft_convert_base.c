/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galves-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 06:58:57 by galves-f          #+#    #+#             */
/*   Updated: 2023/10/09 12:26:06 by galves-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str);
int	ft_str_contains_char(char *str, char c);
int	ft_check_double_char(char *str);
int	ft_check_base(char *base);
int	ft_get_value_of_symbol(char *base, char symbol);

int	ft_atoi_base(char *str, char *base)
{
	int	sign;
	int	result;
	int	base_size;

	sign = 1;
	result = 0;
	base_size = ft_strlen(base);
	while (ft_str_contains_char(" \t\r\n\v\f", *str))
		str++;
	while (ft_str_contains_char("-+", *str))
		if (*str++ == '-')
			sign *= -1;
	while (ft_str_contains_char(base, *str))
		result = (result * base_size) + ft_get_value_of_symbol(base, *str++);
	return (result * sign);
}

int	ft_get_digits_in_base(int n, int base_size)
{
	int unsigned	nb;
	int				digits;

	digits = 0;
	if (n < 0)
		digits++;
	nb = n * (1 - ((n < 0) * 2));
	while (nb > 0)
	{
		nb /= base_size;
		digits++;
	}
	return (digits);
}

void	ft_putnbr_base(int dec, char *base, char *result, int current_idx)
{
	long	n;
	int		base_size;

	base_size = ft_strlen(base);
	n = (long) dec;
	if (n < 0)
	{
		n = -n;
		result[0] = '-';
	}
	if (n >= base_size)
		ft_putnbr_base(n / base_size, base, result, current_idx - 1);
	result[current_idx] = base[n % base_size];
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long	decimal;
	int		digits;
	char	*result;

	if (!ft_check_base(base_from) || !ft_check_base(base_to))
		return (NULL);
	decimal = (long) ft_atoi_base(nbr, base_from);
	digits = ft_get_digits_in_base(decimal, ft_strlen(base_to));
	result = (char *) malloc(sizeof(char) * (digits + 1));
	if (result == NULL)
		return (NULL);
	ft_putnbr_base(decimal, base_to, result, digits - 1);
	result[digits] = '\0';
	return (result);
}
