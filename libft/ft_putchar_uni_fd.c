/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_uni_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 15:19:03 by issmith           #+#    #+#             */
/*   Updated: 2018/07/17 15:19:15 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_uni_fd(int cp, int fd)
{
	if (cp < 128)
		ft_putchar_fd((char)cp, fd);
	else
	{
		if (cp >= 0x10000)
			ft_putchar_fd((char)((cp >> (6 * 3)) | 0xF0), fd);
		if (cp >= 0x10000)
			ft_putchar_fd((char)((cp >> (6 * 2) & 0x3F) | 0x80), fd);
		if (cp >= 0x0800 && cp < 0x10000)
			ft_putchar_fd((char)((cp >> (6 * 2)) | 0xE0), fd);
		if (cp >= 0x0800)
			ft_putchar_fd((char)((cp >> (6 * 1) & 0x3F) | 0x80), fd);
		if (cp >= 0x0080 && cp < 0x0800)
			ft_putchar_fd((char)((cp >> (6 * 1)) | 0xC0), fd);
		if (cp >= 0x0080)
			ft_putchar_fd((char)((cp >> (6 * 0) & 0x3F) | 0x80), fd);
	}
}
