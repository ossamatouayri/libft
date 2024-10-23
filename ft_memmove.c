/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ostouayr <ostouayr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:36:20 by ostouayr          #+#    #+#             */
/*   Updated: 2024/10/23 22:43:54 by ostouayr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	size_t	j;

	if (!src || !dest)
		return(NULL);
	i = 0;
	j = ft_strlen(dest);
	while (i < n)
	{
		((unsigned char *)dest)[j] = ((unsigned char *)src)[i];
		j--;
		i++;
	}
	((unsigned char *)dest)[i] = '\0';
	return(dest);
}

int main(){
	char str[] = "abcde";
	ft_memmove(str + 2, str , 3);
	printf("value is : %s\n",str);

}
