/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 03:36:33 by issmith           #+#    #+#             */
/*   Updated: 2018/07/12 04:45:36 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t j;
	size_t k;

	i = 0;
	j = ft_strlen(dst);
	k = ft_strlen((char *)src);
	if (dstsize <= j)
		return (k + dstsize);
	while ((dst[i] != '\0') && i < (dstsize - 1))
		i++;
	while (*src && i < (dstsize - 1))
	{
		dst[i] = *src;
		i++;
		src++;
	}
	dst[i] = '\0';
	return (j + k);
}
