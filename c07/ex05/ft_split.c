/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galves-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 17:15:36 by galves-f          #+#    #+#             */
/*   Updated: 2023/10/06 12:31:19 by galves-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_is_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		++i;
	}
	return (0);
}

int	ft_is_beg_word(char c, char cbefore, char *charset)
{
	return (!ft_is_charset(c, charset) && ft_is_charset(cbefore, charset));
}

int	ft_count_words(char *str, char *charset)
{
	int	words_count;
	int	i;

	i = 0;
	words_count = 0;
	while (str[i] != '\0')
	{
		if (i == 0)
		{
			if (!ft_is_charset(str[i], charset))
				words_count++;
		}
		else if (ft_is_beg_word(str[i], str[i - 1], charset))
			words_count++;
		i++;
	}
	return (words_count);
}

char	*ft_get_n_word(char *str, char *charset, int n_idx)
{
	int		words_count;
	int		start;
	int		i;
	int		j;
	char	*word;

	i = -1;
	words_count = 0;
	while (words_count <= n_idx && str[++i] != '\0')
		if ((i == 0 && !ft_is_charset(str[i], charset))
			|| (i != 0 && ft_is_beg_word(str[i], str[i - 1], charset)))
			words_count++;
	start = i;
	while (str[++i] != '\0')
		if (ft_is_charset(str[i], charset))
			break ;
	word = (char *) malloc(sizeof(char) * (i + 1 - start));
	j = 0;
	while (start < i)
		word[j++] = str[start++];
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**strs;
	int		words;
	int		i;

	words = ft_count_words(str, charset);
	strs = (char **) malloc(sizeof(char *) * (words + 1));
	if (strs == NULL)
		return (NULL);
	i = -1;
	while (++i < words)
		strs[i] = ft_get_n_word(str, charset, i);
	strs[i] = 0;
	return (strs);
}
