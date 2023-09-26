/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galves-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 21:03:26 by galves-f          #+#    #+#             */
/*   Updated: 2023/09/26 12:07:01 by galves-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void 	ft_strcpy_test(void);
void 	ft_strncpy_test(void);

int main(int argc, char **argv)
{
	if (argc < 2)
	{
		printf("Usage: %s <number of exercise>\n", argv[0]);
		return (1);
	}
	
	if (strcmp(argv[1], "all") == 0)
	{
		printf("Testing all function:\n");
		ft_strcpy_test();
		ft_strncpy_test();
	}

	if (strcmp(argv[1], "0") == 0)
		ft_strcpy_test();
	if (strcmp(argv[1], "1") == 0)
		ft_strncpy_test();
	if (strcmp(argv[1], "2") == 0)
	if (strcmp(argv[1], "3") == 0)
	if (strcmp(argv[1], "4") == 0)
	if (strcmp(argv[1], "5") == 0)
	if (strcmp(argv[1], "6") == 0)
	if (strcmp(argv[1], "7") == 0)
	if (strcmp(argv[1], "8") == 0)
		;
}
