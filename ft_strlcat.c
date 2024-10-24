/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ostouayr <ostouayr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 22:07:56 by ostouayr          #+#    #+#             */
/*   Updated: 2024/10/24 22:44:40 by ostouayr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if(size <= ft_strlen(dst))
		return (size + ft_strlen(src));
	while (dst[i])
		i++;
	while (i < size -1 && (src[j] || dst[i]))
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return(ft_strlen(dst) + ft_strlen(src));
}
int main(){
	char dest[5] = "he";
	int count = strlcat(dest,"hello",5);
	printf("%d\n",count);
}
