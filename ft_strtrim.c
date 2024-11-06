/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ostouayr <ostouayr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 13:56:58 by ostouayr          #+#    #+#             */
/*   Updated: 2024/10/28 13:56:58 by ostouayr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_copy(char *trim, char const *s1, int start, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		trim[i] = s1[start + i];
		i++;
	}
	trim[i] = '\0';
	return (trim);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	size;
	size_t	start;
	size_t	end;
	char	*trim;

	if (!s1 || !set)
		return (NULL);
	size = 0;
	start = 0;
	end = ft_strlen(s1);
	while (start < end && ft_strchr(set, s1[start]))
		start++;
	while (start < end && ft_strchr(set, s1[end - 1]))
		end--;
	size = end - start;
	trim = malloc(size * sizeof(char) + 1);
	if (!trim)
		return (NULL);
	return (ft_copy(trim, s1, start, size));
}
