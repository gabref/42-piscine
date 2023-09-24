/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod_test.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galves-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 21:19:25 by galves-f          #+#    #+#             */
/*   Updated: 2023/09/23 21:24:56 by galves-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

void ft_ultimate_div_mod_test(void)
{
	int a;
	int b;

	a = 12;
	b = 5;
	printf("Test ft_ultimate_div_mod: %d - %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("should be 2=%d : 2=%d\n", a, b);
	a = 35;
	b = 12;
	ft_ultimate_div_mod(&a, &b);
	printf("should be 2=%d : 11=%d\n", a, b);
}

