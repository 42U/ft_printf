/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 13:23:24 by issmith           #+#    #+#             */
/*   Updated: 2018/07/17 15:32:17 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*str;
	unsigned char	*tmp;

	str = (unsigned char *)src;
	tmp = (unsigned char *)dst;
	if (str < tmp)
		while (len-- > 0)
			tmp[len] = str[len];
	else
		ft_memcpy(tmp, str, len);
	return (tmp);
}
