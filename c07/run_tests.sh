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
echo "${GREEN}Ex00 ft_strdup ...${NORMAL}"
gcc -Wall -Werror -Wextra tests/test00.c ex00/ft_strdup.c -o main && ./main

echo "\n- - - - - - - - - - -"
echo "${GREEN}Ex01 ft_range ...${NORMAL}"
gcc -Wall -Werror -Wextra tests/test01.c ex01/ft_range.c -o main && ./main

echo "\n- - - - - - - - - - -"
echo "${GREEN}Ex02 ft_ultimate_range ...${NORMAL}"
gcc -Wall -Werror -Wextra tests/test02.c ex02/ft_ultimate_range.c -o main && ./main

echo "\n- - - - - - - - - - -"
echo "${GREEN}Ex03 ft_strjoin ...${NORMAL}"
gcc -Wall -Werror -Wextra tests/test03.c ex03/ft_strjoin.c -o main && ./main

echo "\n- - - - - - - - - - -"
echo "${GREEN}Ex04 ft_convert_base ...${NORMAL}"
gcc -Wall -Werror -Wextra tests/test04.c ex04/ft_convert_base.c ex04/ft_convert_base2.c -o main && ./main

echo "\n- - - - - - - - - - -"
echo "${GREEN}Ex05 ft_split ...${NORMAL}"
gcc -Wall -Werror -Wextra tests/test05.c ex05/ft_split.c -o main && ./main

echo "\n- - - - - - - - - - -"
echo "${YELLOW}\ncleaning up"
rm main
echo "${GREEN}Done Testing\n${NORMAL}"
