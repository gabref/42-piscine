/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab_test.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galves-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 15:00:43 by galves-f          #+#    #+#             */
/*   Updated: 2023/09/24 15:18:12 by galves-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

void print_array(int arr[], int size)
{
	for (int i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

void 	ft_rev_int_tab_test(void)
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	int size = 5;
	printf("Test ft_rev_int_tab: should be equal\n");
	print_array(arr, size);
	ft_rev_int_tab(arr, size);
	print_array(arr, size);
	printf("\n");
}
