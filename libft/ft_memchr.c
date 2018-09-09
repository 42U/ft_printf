/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 15:56:08 by issmith           #+#    #+#             */
/*   Updated: 2018/07/17 15:32:32 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	x;

	i = 0;
	x = (unsigned char)c;
	str = (unsigned char *)s;
	while (n-- > 0)
	{
		if (str[i] == x)
			return (str + i);
		else if (str[i] != x)
			i++;
	}
	return (NULL);
}
