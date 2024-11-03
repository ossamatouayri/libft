/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ostouayr <ostouayr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 17:07:43 by ostouayr          #+#    #+#             */
/*   Updated: 2024/10/28 17:07:43 by ostouayr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

static char	*copy_words(char *s, char c)
{
	size_t	i;
	size_t	count_len;
	char	*copy;

	i = 0;
	count_len = 0;
	while (s[count_len] && s[count_len] != c)
		count_len++;
	copy = (char *) malloc((count_len + 1) * sizeof(char));
	if (!copy)
		return (NULL);
	while (i < count_len)
	{
		copy[i] = s[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

static void	free_strings(char **strings, size_t i)
{
	while (i > 0)
		free(strings[--i]);
	free(strings);
}

static char	**filler(char const *s, char c, size_t word_len)
{
	char	**strings;
	size_t	i;

	strings = (char **) malloc((word_len + 1) * sizeof(char *));
	if (!strings)
		return (NULL);
	i = 0;
	while (i < word_len)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			strings[i] = copy_words((char *)s, c);
			if (!strings[i])
				return (free_strings(strings, i), NULL);
			i++;
		}
		while (*s && *s != c)
			s++;
	}
	return (strings[i] = NULL, strings);
}

char	**ft_split(char const *s, char c)
{
	char	**strings;
	size_t	word_len;

	if (!s)
		return (NULL);
	word_len = count_words((char *)s, c);
	strings = filler (s, c, word_len);
	return (strings);
}
