#include <stdio.h>
int 	ft_strlen(char *str)
{
	int i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char    *ft_strrev(char *str)
{
	int size = ft_strlen(str);
	int i = 0;
	while (i < size--)
	{
		char temp = str[i];
		str[i++] = str[size];
		str[size] = temp;
	}
	return (str);
}

int main(void)
{
	char str[8] = "leirbag";
	char str2[8] = "oaic";
	printf("%s\n", ft_strrev(str));
	printf("%s\n", ft_strrev(str2));
	return (0);
}
