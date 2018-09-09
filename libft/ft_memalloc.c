/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 11:53:34 by issmith           #+#    #+#             */
/*   Updated: 2018/07/17 12:32:43 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*ptr;
	char	*str;
	size_t	i;

	ptr = (void *)malloc(sizeof(void *) * (size));
	if (ptr == NULL)
		return (NULL);
	if (!size)
		return (NULL);
	str = ptr;
	i = 0;
	while (i++ < size)
		*str++ = 0;
	return (ptr);
}
