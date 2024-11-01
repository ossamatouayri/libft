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
	size_t	i;
	size_t	count;

	i = 0;
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

static int	lento_sep(char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static char	*copy_words(char *s, char c)
{
	size_t	i;
	size_t	count_len;
	char	*copy;

	i = 0;
	count_len = lento_sep(s, c);
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
	size_t	j;

	j = 0;
	while (j < i)
		free(strings[j]);
	free(strings);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	char	**strings;
	size_t	word_len;

	i = 0;
	word_len = count_words((char *)s, c);
	strings = (char **) malloc((word_len + 1) * sizeof(char *));
	if (!strings)
		return (strings);
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
	strings[i] = NULL;
	return (strings);
}
