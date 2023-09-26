/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable_test.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galves-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 14:42:20 by galves-f          #+#    #+#             */
/*   Updated: 2023/09/26 14:48:53 by galves-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_printable(char *str);

void 	ft_str_is_printable_test(void)
{
	char test[20] = "vai mano";
	test[8] = 0x19;
	test[9] = '\0';
	char test1[20] = "438929 5980482905";
	char test2[20] = "12Beleza43-@";
	test2[12] = 0x2;
	test2[13] = '\0';
	int ret;

	printf("Test ft_str_is_printable: should be OK\n");
	ret = ft_str_is_printable(test);
	if (ret == 0) printf("OK!\n");
	else printf("NOT OK\n");

	ret = ft_str_is_printable(test1);
	if (ret == 1) printf("OK!\n");
	else printf("NOT OK\n");

	ret = ft_str_is_printable(test2);
	if (ret == 0) printf("OK!\n");
	else printf("NOT OK\n");

	printf("\n");
}
