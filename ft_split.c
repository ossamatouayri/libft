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

static size_t	lento_sep(char *s, char c)
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
	while (i > 0)
		free(strings[--i]);
	free(strings);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	char	**strings;
	size_t	word_len;

	i = 0;
	word_len = count_words((char *)s, c);
	if (!s)
		return (NULL);
	strings = (char **) malloc((word_len + 1) * sizeof(char *));
	if (!strings)
		return (NULL);
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
int main()
{
	char *s = "test test test";
	char **s1 = ft_split(s, ' ');
	printf("%s\n", s1[3]);

}
