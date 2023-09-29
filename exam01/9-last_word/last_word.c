#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int 	ft_strlen(char *str)
{
	int i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void last_word(char *str)
{
	int size = ft_strlen(str);
	int i = size - 1;
	while (str[i] == ' ' || str[i] == '\t')
		i--;
	while (i >= 0 && str[i] != ' ' && str[i] != '\t')
		i--;
	i++;
	while (i < size && str[i] != ' ' && str[i] != '\t')
		ft_putchar(str[i++]);
}

int main(int argc, char **argv)
{
	if (argc == 2)
		last_word(argv[1]);
	ft_putchar('\n');
	return (0);
}
