#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int is_in_str(char *str, char c)
{
	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

int check_double (char *str, char c, char idx)
{
	int i = 0;
	while (i < idx)
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

void ft_union (char *str1, char *str2)
{
	int i = 0;
	while (str1[i])
	{
		if (!check_double(str1, str1[i], i))
			ft_putchar(str1[i]);
		i++;
	}
	i = 0;
	while (str2[i])
	{
		if (!is_in_str(str1, str2[i]))
		{
			if (!check_double(str2, str2[i], i))
				ft_putchar(str2[i]);
		}
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 3)
		ft_union(argv[1], argv[2]);
	return (0);
}
