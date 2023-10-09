find . -type f -name "*.c" -exec gcc -Wall -Wextra -Werror -c {} \;
ar rcs libft.a *.o
find . -name "*.o" -type f -delete
