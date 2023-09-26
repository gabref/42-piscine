/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha_test.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galves-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 13:56:41 by galves-f          #+#    #+#             */
/*   Updated: 2023/09/26 14:23:26 by galves-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_alpha(char *str);

void 	ft_str_is_alpha_test(void)
{
	char test[20] = "vai mano";
	char test1[20] = "CiaoMeuQueridooo";
	char test2[20] = "12Beleza43-@";
	int ret;

	printf("Test ft_str_is_alpha: should be OK\n");
	ret = ft_str_is_alpha(test);
	if (ret == 0) printf("OK!\n");
	else printf("NOT OK\n");

	ret = ft_str_is_alpha(test1);
	if (ret == 1) printf("OK!\n");
	else printf("NOT OK\n");

	ret = ft_str_is_alpha(test2);
	if (ret == 0) printf("OK!\n");
	else printf("NOT OK\n");

	printf("\n");
}
