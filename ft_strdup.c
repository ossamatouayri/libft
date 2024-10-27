/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ostouayr <ostouayr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 12:11:23 by ostouayr          #+#    #+#             */
/*   Updated: 2024/10/27 14:58:01 by ostouayr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	size_t	all_bytes;
	char	*dup;

	i = 0;
	all_bytes = ft_strlen(s1);
	dup = (char *) malloc(all_bytes * sizeof(char) + 1);
	if (!dup)
		return (NULL);
	while (i < all_bytes)
	{
		dup[i] = s1[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
