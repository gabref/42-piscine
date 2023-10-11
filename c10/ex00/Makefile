SRCS 	= ./srcs/main.c ./srcs/utils.c ./srcs/display_file.c
NAME	= ft_display_file
INCS	= includes
OBJS	= $(SRCS:.c=.o)
CC		= gcc
RM		= rm -f
CFLAGS	= -g -Wall -Wextra -Werror

.c.o:
	$(CC) $(CFLAGS) -c $< -o ${<:.c=.o} -I$(INCS)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

norm:
	norminette -R srcs/*.c
	norminette -R CheckDefine includes/*

.PHONY: all clean fclean re .c.o test
