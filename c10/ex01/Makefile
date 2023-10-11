NAME	= ft_cat
SRCS	= srcs/main.c ./srcs/ft_cat.c ./srcs/utils.c
OBJS	= $(SRCS:.c=.o)
INCS	= includes
CFLAGS	= -g -Wall -Wextra -Werror
CC		= gcc
RM		= rm -f

.c.o :
	$(CC) $(CFLAGS) -c $< -o $@ -I$(INCS)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

.PHONY: all clean fclean
