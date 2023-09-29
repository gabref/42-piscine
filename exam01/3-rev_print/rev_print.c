#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int 	ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}

char *ft_rev_print (char *str)
{
	int i = ft_strlen(str) - 1;
	while (i >= 0)
		ft_putchar(str[i--]);
	ft_putchar('\n');
	return (str);
}

int main(void)
{
	ft_rev_print("gabriel");
	ft_rev_print("ciao");
	ft_rev_print("como vai você");
	ft_rev_print("zaz");
	return (0);
}
