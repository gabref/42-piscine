/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galves-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 17:44:47 by galves-f          #+#    #+#             */
/*   Updated: 2023/09/27 08:59:12 by galves-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return ft_strlen(src);
}
