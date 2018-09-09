/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_words.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 11:46:03 by issmith           #+#    #+#             */
/*   Updated: 2018/07/17 15:07:44 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_words(char const *str, char c)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (*str != '\0')
	{
		if (i == 1 && *str == c)
			i = 0;
		if (i == 0 && *str != c)
		{
			i = 1;
			j++;
		}
		str++;
	}
	return (j);
}