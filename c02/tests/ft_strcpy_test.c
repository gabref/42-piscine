/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galves-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 22:05:00 by galves-f          #+#    #+#             */
/*   Updated: 2023/09/26 11:30:33 by galves-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <assert.h>
#include <string.h>

void	ft_strcpy(char *dest, char *src);

void 	ft_strcpy_test(void)
{
	char src[20] = "vai curintiaaa manoo";
	char dest[20];
	char dest_test[20];

	printf("Test ft_strcpy: should be equal\n");
	strcpy(dest, src);
	ft_strcpy(dest_test, src);
	printf("%s - with strcpy\n%s - with ft_strcpy\n\n", dest, dest_test);
}
