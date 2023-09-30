/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galves-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 10:25:25 by galves-f          #+#    #+#             */
/*   Updated: 2023/09/30 20:08:02 by galves-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				size;
	unsigned int	i;

	size = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0' && i < nb)
	{
		dest[size++] = src[i++];
	}
	dest[size] = '\0';
	return (dest);
}

#include <stdio.h>

int	main(void)
{
	char dest[20] = "ciao, ";
	char src[10] = "come stai?";
	printf("%s", ft_strncat(dest, src, 5));
}
