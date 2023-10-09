/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galves-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:55:59 by galves-f          #+#    #+#             */
/*   Updated: 2023/10/09 18:55:42 by galves-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
int	is_separator(char c, char *charset)
{
	while (*charset)
		if (*charset++ == c)
			return (1);
	return (0);
}

int	is_beg_word(char c, char cbefore, char *charset)
{
	return (!is_separator(c, charset) && is_separator(cbefore, charset));
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	word_count;

	i = -1;
	word_count = 0;
	while (str[++i])
		if ((i == 0 && !is_separator(str[i], charset))
			|| (i != 0 && is_beg_word(str[i], str[i - 1], charset)))
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
			|| (i != 0 && is_beg_word(str[i], str[i - 1], charset)))
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

	words = count_words(str, charset);
	splitted = (char **) malloc(sizeof(char *) * (words + 1));
	i = -1;
	while (++i < words)
		splitted[i] = get_n_word(str, charset, i);
	splitted[i] = 0;
	return (splitted);
}

int main(int ac, char **av)
{
	if (ac > 2)
	{
		int i = 0;
		char **test = ft_split(av[1], av[2]);
		printf("input: %s, sep: %s\n", av[1], av[2]);
		while (test[i])
		{
			printf("%d - %s\n", i, test[i]);
			free(test[i]);
			i++;
		}
		free(test);
	}
	return (0);
}
