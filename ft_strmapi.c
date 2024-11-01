/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ostouayr <ostouayr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 10:06:19 by ostouayr          #+#    #+#             */
/*   Updated: 2024/10/30 10:06:19 by ostouayr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*new_string;
	size_t	size;

	if (!s)
		return (NULL);
	i = 0;
	size = ft_strlen(s);
	new_string = malloc(size + 1);
	if (!new_string)
		return (NULL);
	while (i < size)
	{
		new_string[i] = (*f)((unsigned)i, s[i]);
		i++;
	}
	new_string[i] = '\0';
	return (new_string);
}
