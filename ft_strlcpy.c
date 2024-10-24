/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 01:30:58 by ostouayr            #+#    #+#             */
/*   Updated: 2024/10/24 01:30:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t src_len;

	src_len = ft_strlen(src);
	i = 0;
	if(size)
{
	while(src[i] && i < size -1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
}
	return(src_len);
}
