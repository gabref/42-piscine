#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void first_word(char *str)
{
	while (*str == ' ' || *str == '\t')
		str++;
	while (*str != '\0' && *str != ' ' && *str != '\t')
	{
		ft_putchar(*str);
		str++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
		first_word(argv[1]);
	ft_putchar('\n');
	return (0);
}
