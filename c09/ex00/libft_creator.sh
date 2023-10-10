rm -f libft.a
find . -type f -name "*.c" -exec cc -Wall -Wextra -Werror -c {} \;
ar rc libft.a *.o
ranlib libft.a
find . -name "*.o" -type f -delete
