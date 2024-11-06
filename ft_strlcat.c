/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ostouayr <ostouayr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:52:20 by ostouayr          #+#    #+#             */
/*   Updated: 2024/11/05 21:08:51 by ostouayr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	j;
	size_t	src_len;
	size_t	dst_len;

	j = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (!dst && !size)
		return (src_len);
	if (size == 0)
		return (size + src_len);
	if (size <= dst_len)
		return (size + src_len);
	while (j < size - dst_len - 1 && src[j])
	{
		dst[j + dst_len] = src[j];
		j++;
	}
	dst[dst_len + j] = '\0';
	return (dst_len + src_len);
}
