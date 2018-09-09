/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 03:38:21 by issmith           #+#    #+#             */
/*   Updated: 2018/09/09 05:44:35 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_convert(unsigned int num, int base)
{
	static char conv[16];
	static char buf[50];
	char		*ptr;
	int			i;
	char		c;

	i = 0;
	c = 48;
	while (i < 16 && c >= 48 && c <= 57)
	{
		conv[i++] = c++;
		if (c == 58)
		{
			c = 97;
			while (i < 16)
				conv[i++] = c++;
		}
	}
	ptr = &buf[49];
	*ptr = '\0';
	while (num != 0)
	{
		*--ptr = conv[num % base];
		num /= base;
	}
	return (ptr);
}
