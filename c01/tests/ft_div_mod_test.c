/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galves-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 22:05:00 by galves-f          #+#    #+#             */
/*   Updated: 2023/09/23 20:54:10 by galves-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

void 	ft_div_mod_test(void)
{
	int a;
	int b;
	int div;
	int mod;

	a = 12;
	b = 5;
	printf("Test ft_div_mod: %d / %d \n", a, b);
	ft_div_mod(a, b, &div, &mod);
	printf("should be 2: %d and 2: %d\n", div, mod);
	a = 35;
	b = 12;
	ft_div_mod(a, b, &div, &mod);
	printf("should be 2: %d and 11: %d\n", div, mod);
}
