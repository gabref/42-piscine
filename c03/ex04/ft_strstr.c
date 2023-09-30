/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galves-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 19:47:59 by galves-f          #+#    #+#             */
/*   Updated: 2023/09/30 20:09:15 by galves-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_equal_word(char *str, char *check)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && check[i] != '\0')
	{
		if (str[i] != check[i])
			return (0);
		i++;
	}
	return (1);
}

char	*my_ft_strstr(char *str, char *to_find)
{
	int	first_c;
	int	i;
	int	is_equal;

	is_equal = 0;
	first_c = *to_find;
	i = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i] != '\0' && is_equal != 1)
	{
		if (str[i] == first_c)
			is_equal = ft_check_equal_word(&str[i], to_find);
		i++;
	}
	return (&str[--i]);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
			j++;
		if (to_find[j] == '\0')
			return (str + i);
		i++;
		j = 0;
	}
	return (0);
}

#include <stdio.h>

int main()
{
	char str[20] = "ciaoo come stai?";
	char find[20] = "come";
	printf("%s \n", ft_strstr(str, find));
	return (0);
}
