/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 03:38:21 by issmith           #+#    #+#             */
/*   Updated: 2018/09/14 11:05:16 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_convert(unsigned int num, int base)
{
	static char *conv;
	static char buf[66];
	char		*ptr;

	conv = "0123456789abcdef";
	ptr = &buf[65];
	*ptr = '\0';
	while (num != 0)
	{
		*--ptr = conv[num % base];
		num /= base;
	}
	return (ptr);
}
