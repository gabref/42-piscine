/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galves-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 12:01:21 by galves-f          #+#    #+#             */
/*   Updated: 2023/09/27 05:57:02 by galves-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	ft_strncpy(char *dest, char *src, unsigned int size);

void 	ft_strncpy_test(void)
{
	char src[20] = "vai mano";
	char dest[20];
	char dest_test[20];
	int size = 12;

	printf("Test ft_strncpy: should be equal\n");
	strncpy(dest, src, size);
	ft_strncpy(dest_test, src, size);
	printf("%s - with strncpy\n%s - with ft_strncpy\n", dest, dest_test);

	char src1[20] = "vai curintia e spfc2";
	char dest1[10];
	char dest_test1[10];

	size = 9;
	strncpy(dest1, src1, size);
	ft_strncpy(dest_test1, src1, size);
	printf("%.*s - with strncpy\n%.*s - with ft_strncpy\n\n", size, dest1, size, dest_test1);
}
