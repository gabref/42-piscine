CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = $(wildcard ex*/ft_*.c)
TEST_SRCS = $(wildcard tests/*_test.c)

main: $(SRCS) $(TEST_SRCS)
	$(CC) main.c $(SRCS) $(TEST_SRCS) $(FLAGS) -o main

clean:
	rm main
