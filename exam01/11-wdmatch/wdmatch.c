#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void wdmatch(char *str1, char *str2)
{
	int i = 0;
	int j = 0;
	while (str1[i])
	{
		while (str2[j])
		{
			if (str1[i] == str2[j])
				break;
			j++;
		}
		if (str2[j] == '\0')
			return ;
		i++;
	}
	i = 0;
	while (str1[i])
		ft_putchar(str1[i++]);
}

int main(int argc, char **argv)
{
	if (argc == 3)
		wdmatch(argv[1], argv[2]);
	ft_putchar('\n');
	return (0);
}
