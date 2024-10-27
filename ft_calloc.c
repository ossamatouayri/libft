/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ostouayr <ostouayr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 20:29:02 by ostouayr          #+#    #+#             */
/*   Updated: 2024/10/26 20:29:02 by ostouayr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	all_bytes;
	void	*ptr;

	all_bytes = nmemb * size;
	ptr = malloc(all_bytes);
	if (!ptr)
		return (NULL);
	ft_bzero (ptr, all_bytes);
	return (ptr);
}
