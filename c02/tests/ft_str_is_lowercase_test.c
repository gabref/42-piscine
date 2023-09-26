/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase_test.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galves-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 14:29:48 by galves-f          #+#    #+#             */
/*   Updated: 2023/09/26 14:38:49 by galves-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_lowercase(char *str);

void 	ft_str_is_lowercase_test(void)
{
	char test[20] = "vai manoBeleza";
	char test1[20] = "eaimeubomtudomenor";
	char test2[20] = "12Beleza43-@";
	int ret;

	printf("Test ft_str_is_lowercase: should be OK\n");
	ret = ft_str_is_lowercase(test);
	if (ret == 0) printf("OK!\n");
	else printf("NOT OK\n");

	ret = ft_str_is_lowercase(test1);
	if (ret == 1) printf("OK!\n");
	else printf("NOT OK\n");

	ret = ft_str_is_lowercase(test2);
	if (ret == 0) printf("OK!\n");
	else printf("NOT OK\n");

	printf("\n");
}
