/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 01:13:57 by issmith           #+#    #+#             */
/*   Updated: 2018/07/17 15:10:47 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_dl_len(char *str, char c)
{
	int	i;

	i = 0;
	while (*str != '\0' && *str != c)
	{
		i++;
		str++;
	}
	return (i);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**array;
	int		words;
	int		i;

	i = 0;
	if (s == NULL)
		return (NULL);
	words = ft_words((char *)s, c);
	if (!(array = (char **)malloc(sizeof(char *) * (words + 1))))
		return (NULL);
	while (words--)
	{
		while (*s == c && *s != '\0')
			s++;
		array[i] = ft_strsub((char *)s, 0, ft_dl_len((char *)s, c));
		if (array[i] == NULL)
			return (array);
		s += ft_dl_len((char *)s, c);
		i++;
	}
	array[i] = NULL;
	return (array);
}
