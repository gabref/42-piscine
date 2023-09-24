/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galves-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 22:37:46 by galves-f          #+#    #+#             */
/*   Updated: 2023/09/24 15:04:33 by galves-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putstr(char *str);

void 	ft_putstr_test(void)
{
	char str[] = "ciao come stai?";
	printf("Test ft_putstr: should be equal\n%s \n", str);
	ft_putstr(str);
	printf("\n");
}
