/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galves-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 14:54:45 by galves-f          #+#    #+#             */
/*   Updated: 2023/09/26 15:13:01 by galves-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strupcase(char *str);

void 	ft_strupcase_test(void)
{
	char test[20] = "vai manoBeleza";
	char expc[20] = "VAI MANOBELEZA";
	char test1[20] = "eaimeubomtudomenor";
	char expc1[20] = "EAIMEUBOMTUDOMENOR";
	char test2[20] = "12Beleza43-@";
	char expc2[20] = "12BELEZA43-@";
	int ret;

	printf("Test ft_strupcase: should be OK\n");
	ft_strupcase(test);
	ret = strcmp(test, expc);
	if (ret == 0) printf("OK!\n");
	else printf("NOT OK\n");

	ft_strupcase(test1);
	ret = strcmp(test1, expc1);
	if (ret == 0) printf("OK!\n");
	else printf("NOT OK\n");

	ft_strupcase(test2);
	ret = strcmp(test2, expc2);
	if (ret == 0) printf("OK!\n");
	else printf("NOT OK\n");

	printf("\n");
}
