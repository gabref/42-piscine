/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galves-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 20:21:42 by galves-f          #+#    #+#             */
/*   Updated: 2023/10/09 21:20:13 by galves-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_separator(char c, char *charset)
{
	while (*charset)
		if (*charset++ == c)
			return (1);
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	word_count;

	i = -1;
	word_count = 0;
	while (str[++i])
		if ((i == 0 && !is_separator(str[i], charset))
			|| (i != 0 && !is_separator(str[i], charset)
				&& is_separator(str[i - 1], charset)))
			word_count++;
	return (word_count);
}

char	*get_n_word(char *str, char *charset, int idx_word)
{
	int		i;
	int		j;
	int		start;
	int		word_count;
	char	*word;

	i = -1;
	j = 0;
	word_count = 0;
	while (word_count <= idx_word && str[++i])
		if ((i == 0 && !is_separator(str[i], charset))
			|| (i != 0 && !is_separator(str[i], charset)
				&& is_separator(str[i - 1], charset)))
			word_count++;
	start = i++;
	while (str[i] && !is_separator(str[i], charset))
		i++;
	word = (char *) malloc(sizeof(char) * (i - start));
	if (word == NULL)
		return (0);
	while (start < i)
		word[j++] = str[start++];
	word[j] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**splitted;
	int		words;
	int		i;

	if (charset == NULL)
		return (0);
	if (str == NULL)
		return (0);
	words = count_words(str, charset);
	splitted = (char **) malloc(sizeof(char *) * (words + 1));
	if (splitted == NULL)
		return (0);
	i = -1;
	while (++i < words)
		splitted[i] = get_n_word(str, charset, i);
	splitted[i] = 0;
	return (splitted);
}

/*
int main(int ac, char **av)
{
	if (ac > 2)
	{
		int i = 0;
		char **test;
		printf("got here");
		test = ft_split("", "");
		i = 0;
		if  (test == NULL)
			printf("\ntest is null\n");
		if  (test[i] == NULL)
			printf("\ntest[i] is null\n");
		while (test[i])
		{
			printf("%d - %s\n", i, test[i]);
			free(test[i]);
			i++;
		}
		free(test);

		test = ft_split(av[1], av[2]);
		printf("input: %s, sep: %s\n", av[1], av[2]);
		while (test[i])
		{
			printf("%d - %s\n", i, test[i]);
			free(test[i]);
			i++;
		}
		free(test);

		test = ft_split("", NULL);
		i = 0;
		if  (test == NULL) printf("\ntest is null\n");
		else if  (test == NULL) printf("\ntest[i] is null\n");
		while (test && test[i])
		{
			printf("%d - %s\n", i, test[i]);
			free(test[i]);
			i++;
		}
		if (test != NULL)
			free(test);

		test = ft_split(NULL, "");
		i = 0;
		if  (test == NULL) printf("\ntest is null\n");
		else if  (test == NULL) printf("\ntest[i] is null\n");
		while (test && test[i])
		{
			printf("%d - %s\n", i, test[i]);
			free(test[i]);
			i++;
		}
		if (test != NULL)
			free(test);

		test = ft_split(NULL, NULL);
		i = 0;
		if  (test == NULL) printf("\ntest is null\n");
		else if  (test == NULL) printf("\ntest[i] is null\n");
		while (test && test[i])
		{
			printf("%d - %s\n", i, test[i]);
			free(test[i]);
			i++;
		}
		if (test != NULL)
			free(test);
	}
	return (0);
}
*/
