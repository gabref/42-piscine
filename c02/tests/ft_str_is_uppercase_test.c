/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase_test.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galves-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 14:36:49 by galves-f          #+#    #+#             */
/*   Updated: 2023/09/27 05:59:21 by galves-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_uppercase(char *str);

void 	ft_str_is_uppercase_test(void)
{
	char test[20] = "vai manoBeleza";
	char test1[20] = "EAIMEUMANOBEELEZA";
	char test2[20] = "12Beleza43-@";
	int ret;

	printf("Test ft_str_is_uppercase: should be OK\n");
	ret = ft_str_is_uppercase(test);
	if (ret == 0) printf("OK!\n");
	else printf("NOT OK\n");

	ret = ft_str_is_uppercase(test1);
	if (ret == 1) printf("OK!\n");
	else printf("NOT OK\n");

	ret = ft_str_is_uppercase(test2);
	if (ret == 0) printf("OK!\n");
	else printf("NOT OK\n");

	printf("\n");
}
