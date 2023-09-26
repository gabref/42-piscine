/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galves-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 16:16:13 by galves-f          #+#    #+#             */
/*   Updated: 2023/09/26 17:38:04 by galves-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

enum e_alphanumeric {
	is_null,
	is_up_alpha,
	is_low_alpha,
	is_numeric,
	is_not_alphanum
};

int	ft_get_type(char c)
{
	if (c != '\0')
	{
		if (c >= 'a' && c <= 'z')
			return (is_low_alpha);
		else if (c >= 'A' && c <= 'Z')
			return (is_up_alpha);
		else if (c >= '0' && c <= '9')
			return (is_numeric);
		else
			return (is_not_alphanum);
	}
	return (is_null);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	if (ft_get_type(str[0]) == is_low_alpha)
		str[0] -= 32;
	i = 1;
	while (str[i])
	{
		if (ft_get_type(str[i - 1]) == is_not_alphanum
			&& ft_get_type(str[i]) == is_low_alpha)
			str[i] -= 32;
		else if (ft_get_type(str[i - 1]) == is_up_alpha
			&& ft_get_type(str[i]) == is_up_alpha)
			str[i] += 32;
		else if (ft_get_type(str[i - 1]) == is_low_alpha
			&& ft_get_type(str[i]) == is_up_alpha)
			str[i] += 32;
		else if (ft_get_type(str[i - 1]) == is_numeric
			&& ft_get_type(str[i]) == is_up_alpha)
			str[i] += 32;
		i++;
	}
	return (str);
}
