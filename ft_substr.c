/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ostouayr <ostouayr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 15:05:17 by ostouayr          #+#    #+#             */
/*   Updated: 2024/10/27 15:05:17 by ostouayr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start,size_t len)
{
	size_t	i;
	size_t	size;
	char *ptr;
	size_t slen;

	if(!s)
		return(NULL);
	i = 0;
	slen = ft_strlen(s);
	if(start >= slen)
	{
		size  = 0;
	}
	else if (slen - start < len)
	{
		size = slen - start;
	}
	else
	size = len;
	ptr  = malloc(size * sizeof(char) + 1);
	if(!ptr)
		return(NULL);
	while(i < size)
	{
		ptr[i] = s[start + i];
		i++;
	}
	ptr[i] = '\0';
	return(ptr);
}
