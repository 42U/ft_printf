/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 15:30:33 by issmith           #+#    #+#             */
/*   Updated: 2018/07/17 15:30:42 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t i;
	size_t j;

	j = 0;
	while (needle[0] == '\0' && haystack[0] == '\0')
		return ((char *)haystack);
	while (haystack[j] != '\0')
	{
		i = 0;
		while (haystack[j + i] == needle[i] && needle[i] != '\0')
			i++;
		if (needle[i] == '\0')
			return ((char *)haystack + j);
		j++;
	}
	return (NULL);
}
