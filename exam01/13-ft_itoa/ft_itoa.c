#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int count_digits(long nbr)
{
	int digits = 0;
	if (nbr < 0)
	{
		nbr *= -1;
		digits++;
	}
	while (nbr > 0)
	{
		nbr /=  10;
		digits++;
	}
	return (digits);
}

char	*ft_itoa(int nbr)
{
	long n = nbr;
	int digits = count_digits(n);
	char *res = (char *) malloc(sizeof(char) * digits);
	if (res == NULL)
		return (0);
	res[digits--] = '\0';
	if (n == 0)
	{
		res[0] = 48;
		return (res);
	}
	if (n < 0)
	{
		res[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		res[digits] = 48 + (n % 10);
		n /= 10;
		digits--;
	}
	return res;
}

int main(void)
{
	printf("%s\n", ft_itoa(1342));
	printf("%s\n", ft_itoa(-1342));
}
