#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int is_in_str(char *str, char c)
{
	int occurences = 0;
	while (*str)
	{
		if (*str == c)
			occurences++;
		str++;
	}
	return (occurences);
}

int check_double(char *str, char c, int idx)
{
	int i = 0;
	while (str[i] != '\0' && i < idx)
	{
		if (str[i++] == c)
			return (0);
	}
	return (1);
}

void inter(char *str, char *base)
{
	int i = 0;
	while (str[i] != '\0')
	{
		if (is_in_str(base, str[i]))
		{
			if (check_double(str, str[i], i))
				ft_putchar(str[i]);
		}
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 3)
		inter(argv[1], argv[2]);
	ft_putchar('\n');
	return (0);
}
