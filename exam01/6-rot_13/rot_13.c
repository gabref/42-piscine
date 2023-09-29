#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void rot_13(char *str)
{
	while (*str)
	{
		if ((*str >= 'a' && *str <= 'm') || (*str >= 'A' && *str <= 'M'))
			ft_putchar(*str + 13);
		else if ((*str >= 'n' && *str <= 'z') || (*str >= 'N' && *str <= 'Z'))
			ft_putchar(*str - 13);
		else
			ft_putchar(*str);
		str++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
		rot_13(argv[1]);
	ft_putchar('\n');
	return (0);
}
