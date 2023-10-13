/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epenaloz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 19:09:18 by epenaloz          #+#    #+#             */
/*   Updated: 2023/09/25 19:18:34 by epenaloz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*source;
	unsigned char	*destiny;
	size_t			i;

	i = 0;
	destiny = (unsigned char *)dst;
	source = (unsigned char *)src;
	if ((void *)destiny == NULL && (void *)source == NULL)
		return (NULL);
	while (n > 0)
	{
		destiny[i] = source[i];
		i++;
		n--;
	}
	return (dst);
}
