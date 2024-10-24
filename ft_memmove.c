/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:36:20 by ostouayr          #+#    #+#             */
/*   Updated: 2024/10/24 01:30:10 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(dest);
	if(dest > src)
	{
		while(n--)
		{
			((unsigned char *)dest)[n] = ((unsigned char *)src)[n];
		}
	}
	else
	{
		while(i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return(dest);
}
