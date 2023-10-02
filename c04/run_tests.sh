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
echo "${GREEN}Ex00 ft_strlen ...${NORMAL}"
gcc -Wall -Werror -Wextra tests/test00.c ex00/ft_strlen.c -o main && ./main

echo "\n- - - - - - - - - - -"
echo "${GREEN}Ex01 ft_putstr ...${NORMAL}"
gcc -Wall -Werror -Wextra tests/test01.c ex01/ft_putstr.c -o main && ./main

echo "\n- - - - - - - - - - -"
echo "${GREEN}Ex02 ft_putnbr ...${NORMAL}"
gcc -Wall -Werror -Wextra tests/test02.c ex02/ft_putnbr.c -o main && ./main

echo "\n- - - - - - - - - - -"
echo "${GREEN}Ex03 ft_atoi ...${NORMAL}"
gcc -Wall -Werror -Wextra tests/test03.c ex03/ft_atoi.c -o main && ./main

echo "\n- - - - - - - - - - -"
echo "${GREEN}Ex04 ft_putnbr_base ...${NORMAL}"
gcc -Wall -Werror -Wextra tests/test04.c ex04/ft_putnbr_base.c -o main && ./main

echo "\n- - - - - - - - - - -"
echo "${GREEN}Ex05 ft_atoi_base ...${NORMAL}"
gcc -Wall -Werror -Wextra tests/test05.c ex05/ft_atoi_base.c -o main && ./main

echo "\n- - - - - - - - - - -"
echo "${YELLOW}\ncleaning up"
rm main
echo "${GREEN}Done Testing\n${NORMAL}"
