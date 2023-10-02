/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galves-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 06:00:54 by galves-f          #+#    #+#             */
/*   Updated: 2023/10/02 13:46:54 by galves-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_constraints(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i++] != '\0')
		;
	if (i < 2)
		return (1);
	i = 0;
	while (*(str + i))
	{
		if (str[i] <= 32 || str[i] == 127 || str[i] == '+' || str[i] == '-')
			return (1);
		j = i + 1;
		while (*(str + j))
		{
			if (*(str + i) == *(str + j++))
				return (1);
		}
		i++;
	}
	return (0);
}

int	ft_is_symbol_set(char c, char *symbols)
{
	while (*symbols != '\0' && (c != *symbols))
		symbols++;
	if (!*symbols)
		return (0);
	return (1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_get_value_of_symbol(char symbol, char *base)
{
	int	i;

	i = 0;
	while (symbol != base[i])
		i++;
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	result;
	int	sign;
	int	int_base;

	result = 0;
	sign = 1;
	if (ft_check_constraints(base))
		return (0);
	int_base = ft_strlen(base);
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	while (*str == '-' || *str == '+')
		if (*str++ == '-')
			sign *= -1;
	while (ft_is_symbol_set(*str, base))
		result = (result * int_base) + ft_get_value_of_symbol(*str++, base);
	return (result * sign);
}
