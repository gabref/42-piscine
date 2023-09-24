/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab_test.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galves-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 15:24:59 by galves-f          #+#    #+#             */
/*   Updated: 2023/09/24 15:30:06 by galves-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

void print_array(int arr[], int size);

void	ft_sort_int_tab_test()
{

	int arr[5] = { 3, 7, 5, 4, 6 };
	int size = 5;
	printf("Test ft_sort_int_tab: should be in order\n");
	print_array(arr, size);
	ft_sort_int_tab(arr, size);
	print_array(arr, size);
	printf("\n");
}
