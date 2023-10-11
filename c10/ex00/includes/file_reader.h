/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_reader.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galves-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 11:12:45 by galves-f          #+#    #+#             */
/*   Updated: 2023/10/10 11:30:21 by galves-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_READER_H
# define FILE_READER_H

# include <fcntl.h>
# include <unistd.h>

void	ft_putstr(char *str, int std);
int		ft_display_file(char *file);

#endif
