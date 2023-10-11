# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: galves-f <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/11 05:58:59 by galves-f          #+#    #+#              #
#    Updated: 2023/10/11 06:03:06 by galves-f         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ./srcs/main.c ./srcs/display_file.c ./srcs/utils.c ./srcs/utils2.c
NAME	= ft_tail
INCS	= includes
OBJS	= $(SRCS:.c=.o)
GCC		= cc
RM		= rm -f
CFLAGS	= -g -Wall -Wextra -Werror

.c.o:
	$(GCC) $(CFLAGS) -c $< -o $@ -I$(INCS)

$(NAME): $(OBJS)
	$(GCC) $(CFLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: .c.o all clean fclean
