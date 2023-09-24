/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galves-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 23:36:04 by galves-f          #+#    #+#             */
/*   Updated: 2023/09/24 00:06:57 by galves-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str);

void 	ft_strlen_test(void)
{
	int size;
	char str[5] = "ciao";

	printf("Test ft_strlen: %s\n", str);
	size = ft_strlen(str);
	printf("should be 5: %d\n", size);

	char str2[12] = "bella ciao";
	size = ft_strlen(str2);
	printf("should be 11: %d\n", size);
}
