/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galves-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 21:03:26 by galves-f          #+#    #+#             */
/*   Updated: 2023/09/24 18:23:10 by galves-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void 	ft_ft_test(void);
void	ft_ultimate_ft_test(void);
void 	ft_swap_test(void);
void 	ft_div_mod_test(void);
void	ft_ultimate_div_mod_test(void);
void	ft_putstr_test(void);
void	ft_strlen_test(void);
void	ft_rev_int_tab_test(void);
void	ft_sort_int_tab_test(void);

int main(int argc, char **argv)
{
	if (argc < 2)
	{
		printf("Usage: %s <number of exercise>\n", argv[0]);
		return (1);
	}

	if (strcmp(argv[1], "0") == 0)
		ft_ft_test();
	if (strcmp(argv[1], "1") == 0)
		ft_ultimate_ft_test();
	if (strcmp(argv[1], "2") == 0)
		ft_swap_test();
	if (strcmp(argv[1], "3") == 0)
		ft_div_mod_test();
	if (strcmp(argv[1], "4") == 0)
		ft_ultimate_div_mod_test();
	if (strcmp(argv[1], "5") == 0)
		ft_putstr_test();
	if (strcmp(argv[1], "6") == 0)
		ft_strlen_test();
	if (strcmp(argv[1], "7") == 0)
		ft_rev_int_tab_test();
	if (strcmp(argv[1], "8") == 0)
		ft_sort_int_tab_test();
	
	if (strcmp(argv[1], "all") == 0)
	{
		ft_ft_test();
		printf("\n");
		ft_ultimate_ft_test();
		printf("\n");
		ft_swap_test();
		printf("\n");
		ft_div_mod_test();
		printf("\n");
		ft_ultimate_div_mod_test();
		printf("\n");
		ft_putstr_test();
		printf("\n");
		ft_strlen_test();
		printf("\n");
		ft_rev_int_tab_test();
		printf("\n");
		ft_sort_int_tab_test();
		printf("\n");
	}
}
