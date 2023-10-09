/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galves-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 09:33:05 by galves-f          #+#    #+#             */
/*   Updated: 2023/10/06 12:20:32 by galves-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_str_contains_char(char *str, char c)
{
	while (*str)
		if (*str++ == c)
			return (1);
	return (0);
}

int	ft_check_double_char(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		j = i + 1;
		while (str[j] != '\0')
			if (str[i] == str[j++])
				return (1);
		i++;
	}
	return (0);
}

int	ft_check_base(char *base)
{
	int	i;

	if (ft_strlen(base) < 2)
		return (0);
	if (ft_check_double_char(base))
		return (0);
	i = 0;
	while (base[i] != '\0')
		if (ft_str_contains_char("+- \t\r\n\v\f", base[i++]))
			return (0);
	return (1);
}

int	ft_get_value_of_symbol(char *base, char symbol)
{
	int	i;

	i = 0;
	while (*base && *base++ != symbol)
		i++;
	return (i);
}
