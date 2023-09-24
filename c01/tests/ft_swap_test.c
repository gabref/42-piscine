/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galves-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 22:10:53 by galves-f          #+#    #+#             */
/*   Updated: 2023/09/24 18:22:52 by galves-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_swap(int *a, int *b);

void ft_swap_test(void)
{
	int a;
	int b;

	a = 5;
	b = 10;
	printf("Test ft_swap: %d - %d \n", a, b);
	ft_swap(&a, &b);
	printf("should be 10,5 : %d,%d", a, b);
}
