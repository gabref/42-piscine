/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galves-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 11:13:17 by galves-f          #+#    #+#             */
/*   Updated: 2023/10/10 11:33:48 by galves-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/file_reader.h"

void	ft_putstr(char *str, int std)
{
	while (*str)
		write(std, str++, 1);
}