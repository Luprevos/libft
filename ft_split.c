/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luprevos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 19:23:41 by luprevos          #+#    #+#             */
/*   Updated: 2024/05/18 15:00:46 by luprevos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static const char	*next_word_start(const char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && str[i] == c)
		i++;
	return (&str[i]);
}

static size_t	word_length(const char *str, char c)
{
	size_t	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

int	count_words(const char *str, char c)
{
	int	i;
	int	count;
	int	in_word;

	i = 0;
	count = 0;
	in_word = 0;
	while (str[i])
	{
		if (str[i] == c)
			in_word = 0;
		else if (in_word == 0)
		{
			in_word = 1;
			count++;
		}
		i++;
	}
	return (count);
}

char	**ft_split(char const *str, char c)
{
	char	**result;
	size_t	i;
	size_t	j;
	size_t	word_count;
	size_t	word_len;

	word_count = count_words(str, c);
	i = 0;
	result = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!result)
		return (NULL);
	while (*str && i < word_count)
	{
		str = next_word_start(str, c);
		word_len = word_length(str, c);
		result[i] = (char *)malloc(sizeof(char) * (word_len + 1));
		if (!result[i])
			return (NULL);
		j = 0;
		while (j < word_len)
			result[i][j++] = *str++;
		result[i++][word_len] = '\0';
	}
	result[word_count] = NULL;
	return (result);
}