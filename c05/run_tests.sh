BLACK=$(tput setaf 0)
RED=$(tput setaf 1)
GREEN=$(tput setaf 2)
YELLOW=$(tput setaf 3)
LIME_YELLOW=$(tput setaf 190)
POWDER_BLUE=$(tput setaf 153)
BLUE=$(tput setaf 4)
MAGENTA=$(tput setaf 5)
CYAN=$(tput setaf 6)
WHITE=$(tput setaf 7)
BRIGHT=$(tput bold)
NORMAL=$(tput sgr0)
BLINK=$(tput blink)
REVERSE=$(tput smso)
UNDERLINE=$(tput smul)

echo "${POWDER_BLUE}\n"
echo "   ██████╗  █████╗ ██████╗ ██████╗ ███████╗    ████████╗███████╗███████╗████████╗███████╗"
echo "  ██╔════╝ ██╔══██╗██╔══██╗██╔══██╗██╔════╝    ╚══██╔══╝██╔════╝██╔════╝╚══██╔══╝██╔════╝"
echo "  ██║  ███╗███████║██████╔╝██████╔╝█████╗         ██║   █████╗  ███████╗   ██║   ███████╗"
echo "  ██║   ██║██╔══██║██╔══██╗██╔══██╗██╔══╝         ██║   ██╔══╝  ╚════██║   ██║   ╚════██║"
echo "  ╚██████╔╝██║  ██║██████╔╝██║  ██║███████╗       ██║   ███████╗███████║   ██║   ███████║"
echo "   ╚═════╝ ╚═╝  ╚═╝╚═════╝ ╚═╝  ╚═╝╚══════╝       ╚═╝   ╚══════╝╚══════╝   ╚═╝   ╚══════╝"
echo "${NORMAL}"

norminette ex*/*.c -R CheckForbiddenSourceHeader

echo "\n- - - - - - - - - - -"
echo "${GREEN}Ex00 ft_iterative_factorial ...${NORMAL}"
gcc -Wall -Werror -Wextra tests/test00.c ex00/ft_iterative_factorial.c -o main && ./main

echo "\n- - - - - - - - - - -"
echo "${GREEN}Ex01 ft_recursive_factorial ...${NORMAL}"
gcc -Wall -Werror -Wextra tests/test01.c ex01/ft_recursive_factorial.c -o main && ./main

echo "\n- - - - - - - - - - -"
echo "${GREEN}Ex02 ft_iterative_power ...${NORMAL}"
gcc -Wall -Werror -Wextra tests/test02.c ex02/ft_iterative_power.c -o main && ./main

echo "\n- - - - - - - - - - -"
echo "${GREEN}Ex03 ft_recursive_power ...${NORMAL}"
gcc -Wall -Werror -Wextra tests/test03.c ex03/ft_recursive_power.c -o main && ./main

echo "\n- - - - - - - - - - -"
echo "${GREEN}Ex04 ft_fibonacci ...${NORMAL}"
gcc -Wall -Werror -Wextra tests/test04.c ex04/ft_fibonacci.c -o main && ./main

echo "\n- - - - - - - - - - -"
echo "${GREEN}Ex05 ft_sqrt ...${NORMAL}"
gcc -Wall -Werror -Wextra tests/test05.c ex05/ft_sqrt.c -o main && ./main

echo "\n- - - - - - - - - - -"
echo "${GREEN}Ex06 ft_is_prime ...${NORMAL}"
gcc -Wall -Werror -Wextra tests/test06.c ex06/ft_is_prime.c -o main && ./main

echo "\n- - - - - - - - - - -"
echo "${GREEN}Ex07 ft_find_next_prime ...${NORMAL}"
gcc -Wall -Werror -Wextra tests/test07.c ex07/ft_find_next_prime.c -o main && ./main

echo "\n- - - - - - - - - - -"
echo "${GREEN}Ex08 ft_ten_queens_puzzle ...${NORMAL}"
gcc -Wall -Werror -Wextra tests/test08.c ex08/ft_ten_queens_puzzle.c -o main && ./main

echo "\n- - - - - - - - - - -"
echo "${YELLOW}\ncleaning up"
rm main
echo "${GREEN}Done Testing\n${NORMAL}"
