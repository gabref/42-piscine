/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory_test.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galves-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 03:55:17 by galves-f          #+#    #+#             */
/*   Updated: 2023/09/29 10:05:19 by galves-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_print_memory(void *addr, unsigned int size);

void	ft_print_memory_test(void)
{
	char	empty[] = "";
	char	str0[] = "Bonjour les amin----";
	char	str1[] = "ches\t\n\tc  est fo----";
	char	str2[] = "u\ttout\tce qu on ----";
	char	str3[] = "peut faire avec\t----";
	char	str4[] = "\n\tprint_memory\n\n----";
	char 	str5[] = "\n\tlol.lol\n \0";

	ft_print_memory(NULL, sizeof(NULL));
	ft_print_memory((void *)empty, sizeof(empty));
	ft_print_memory((void *)str0, sizeof(str0));
	ft_print_memory((void *)str1, sizeof(str1));
	ft_print_memory((void *)str2, sizeof(str2));
	ft_print_memory((void *)str3, sizeof(str3));
	ft_print_memory((void *)str4, sizeof(str4));
	ft_print_memory((void *)str5, sizeof(str5));
}
