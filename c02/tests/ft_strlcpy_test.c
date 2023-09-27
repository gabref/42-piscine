/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galves-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 03:13:12 by galves-f          #+#    #+#             */
/*   Updated: 2023/09/27 03:28:04 by galves-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	ft_strlcpy(char *dest, char *src, unsigned int size);

void 	ft_strlcpy_test(void)
{
	char src[20] = "vai mano";
	char expc[20] = "vai mano";
	char dest_test[20];
	int size = 12;

	printf("Test ft_strlcpy: should be equal\n");
	ft_strlcpy(dest_test, src, size);
	printf("%s - with strlcpy\n%s - with ft_strlcpy\n", expc, dest_test);

	char src1[20] = "vai curintia e spfc2";
	char expc1[10] = "vai curi";
	char dest_test1[10];

	size = 9;
	ft_strlcpy(dest_test1, src1, size);
	printf("%s - with strlcpy\n%s - with ft_strlcpy\n", expc1, dest_test1);

	char src2[20] = "vai curintia e spfc2";
	char expc2[10] = "";
	char dest_test2[10];

	size = 0;
	ft_strlcpy(dest_test2, src2, size);
	printf("%s - with strlcpy\n%s - with ft_strlcpy\n\n", expc1, dest_test1);
}
