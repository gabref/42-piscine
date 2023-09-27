MAIN = main.c
CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRCS = $(wildcard ex*/ft_*.c)
TEST_SRCS = $(wildcard tests/*_test.c)

main: $(SRCS) $(TEST_SRCS) $(MAIN)
	$(CC) $(MAIN) $(SRCS) $(TEST_SRCS) $(FLAGS) -o main

clean:
	rm main
