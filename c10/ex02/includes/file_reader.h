/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_reader.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galves-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 06:03:34 by galves-f          #+#    #+#             */
/*   Updated: 2023/10/11 07:03:14 by galves-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_READER_H
# define FILE_READER_H

# include <unistd.h>
# include <fcntl.h>
# include <errno.h>
# include <string.h>
# include <libgen.h>

# define ERROR_TOO_MANY_ARGS "Too many arguments.\n"
# define ERROR_NO_ARGS "File name missing.\n"

void	display_content(char *file, int offset, int ac, int current);
void	ft_tailheader(char *filename);
void	display_error(char *file);
void	tail_repeat(void);
void	ft_putstr(int fd, char *str);
void	ft_putchar(char c);
int		ft_file_size(char *file);
int		ft_strcmp(char *s1, char *s2);
int		ft_atoi(char *str);
int		inside_str(char c, char *str);

#endif
