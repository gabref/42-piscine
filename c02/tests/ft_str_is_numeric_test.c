/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric_test.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galves-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 14:22:53 by galves-f          #+#    #+#             */
/*   Updated: 2023/09/26 14:25:26 by galves-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_numeric(char *str);

void 	ft_str_is_numeric_test(void)
{
	char test[20] = "vai mano";
	char test1[20] = "4389295980482905";
	char test2[20] = "12Beleza43-@";
	int ret;

	printf("Test ft_str_is_numeric: should be OK\n");
	ret = ft_str_is_numeric(test);
	if (ret == 0) printf("OK!\n");
	else printf("NOT OK\n");

	ret = ft_str_is_numeric(test1);
	if (ret == 1) printf("OK!\n");
	else printf("NOT OK\n");

	ret = ft_str_is_numeric(test2);
	if (ret == 0) printf("OK!\n");
	else printf("NOT OK\n");

	printf("\n");
}
