/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galves-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 21:03:26 by galves-f          #+#    #+#             */
/*   Updated: 2023/09/27 04:51:37 by galves-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void 	ft_strcpy_test(void);
void 	ft_strncpy_test(void);
void	ft_str_is_alpha_test(void);
void	ft_str_is_numeric_test(void);
void	ft_str_is_lowercase_test(void);
void	ft_str_is_uppercase_test(void);
void	ft_str_is_printable_test(void);
void	ft_strupcase_test(void);
void	ft_strlowcase_test(void);
void	ft_strcapitalize_test(void);
void 	ft_strlcpy_test(void);
void	ft_putstr_non_printable_test(void);
void	ft_print_memory_test(void);

int main(int argc, char **argv)
{
	if (argc < 2)
	{
		printf("Usage: %s <number of exercise>\n", argv[0]);
		return (1);
	}

	if (strcmp(argv[1], "0") == 0)
		ft_strcpy_test();
	if (strcmp(argv[1], "1") == 0)
		ft_strncpy_test();
	if (strcmp(argv[1], "2") == 0)
		ft_str_is_alpha_test();
	if (strcmp(argv[1], "3") == 0)
		ft_str_is_numeric_test();
	if (strcmp(argv[1], "4") == 0)
		ft_str_is_lowercase_test();
	if (strcmp(argv[1], "5") == 0)
		ft_str_is_uppercase_test();
	if (strcmp(argv[1], "6") == 0)
		ft_str_is_printable_test();
	if (strcmp(argv[1], "7") == 0)
		ft_strupcase_test();
	if (strcmp(argv[1], "8") == 0)
		ft_strlowcase_test();
	if (strcmp(argv[1], "9") == 0)
		ft_strcapitalize_test();
	if (strcmp(argv[1], "10") == 0)
		ft_strlcpy_test();
	if (strcmp(argv[1], "11") == 0)
		ft_putstr_non_printable_test();
	if (strcmp(argv[1], "12") == 0)
		ft_print_memory_test();

	if (strcmp(argv[1], "all") == 0)
	{
		printf("Testing all function:\n");
		ft_strcpy_test();
		ft_strncpy_test();
		ft_str_is_alpha_test();
		ft_str_is_numeric_test();
		ft_str_is_lowercase_test();
		ft_str_is_uppercase_test();
		ft_str_is_printable_test();
		ft_strupcase_test();
		ft_strlowcase_test();
		ft_strcapitalize_test();
		ft_strlcpy_test();
		ft_putstr_non_printable_test();
		ft_print_memory_test();
	}
}
