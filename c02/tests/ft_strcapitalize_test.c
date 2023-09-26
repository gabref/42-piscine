/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize_test.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galves-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 15:18:21 by galves-f          #+#    #+#             */
/*   Updated: 2023/09/26 17:43:50 by galves-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcapitalize(char *str);

void 	ft_strcapitalize_test(void)
{
	char test[62] = "salut, comment tu vas ? 42Mots quarante-deux; cinquante+et+un";
	char expc[62] = "Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un";
	char test1[20] = "ciao, come stai";
	char expc1[20] = "Ciao, Come Stai";
	char test2[20] = "12bElEZa43-@";
	char expc2[20] = "12beleza43-@";
	int ret;

	printf("Test ft_strcapitalize: should be OK\n");
	ft_strcapitalize(test);
	ret = strcmp(test, expc);
	if (ret == 0) printf("OK!\n");
	else printf("NOT OK\n");

	ft_strcapitalize(test1);
	ret = strcmp(test1, expc1);
	if (ret == 0) printf("OK!\n");
	else printf("NOT OK\n");

	ft_strcapitalize(test2);
	ret = strcmp(test2, expc2);
	if (ret == 0) printf("OK!\n");
	else printf("NOT OK\n");

	printf("\n");
}
