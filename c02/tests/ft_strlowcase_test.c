/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galves-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 15:13:14 by galves-f          #+#    #+#             */
/*   Updated: 2023/09/26 15:14:09 by galves-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strlowcase(char *str);

void 	ft_strlowcase_test(void)
{
	char test[20] = "vai manoBeleza";
	char expc[20] = "vai manobeleza";
	char test1[20] = "EAIMEUBOMTUDOMENOR";
	char expc1[20] = "eaimeubomtudomenor";
	char test2[20] = "12Beleza43-@";
	char expc2[20] = "12beleza43-@";
	int ret;

	printf("Test ft_strlowcase: should be OK\n");
	ft_strlowcase(test);
	ret = strcmp(test, expc);
	if (ret == 0) printf("OK!\n");
	else printf("NOT OK\n");

	ft_strlowcase(test1);
	ret = strcmp(test1, expc1);
	if (ret == 0) printf("OK!\n");
	else printf("NOT OK\n");

	ft_strlowcase(test2);
	ret = strcmp(test2, expc2);
	if (ret == 0) printf("OK!\n");
	else printf("NOT OK\n");

	printf("\n");
}
