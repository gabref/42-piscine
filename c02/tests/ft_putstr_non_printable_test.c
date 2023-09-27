/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable_test.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galves-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 03:39:54 by galves-f          #+#    #+#             */
/*   Updated: 2023/09/27 05:58:20 by galves-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_putstr_non_printable(char *str);

void 	ft_putstr_non_printable_test(void)
{
	char src[20] = "v\rai\n ma\tno";
	char expc[20] = "v\\0dai\\0a ma\\09no";

	printf("Test ft_putstr_non_printable: should be equal\n");
	ft_putstr_non_printable(src);
	printf("\n%s\n", expc);
}
