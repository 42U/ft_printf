/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_altstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 11:58:16 by issmith           #+#    #+#             */
/*   Updated: 2018/09/14 15:04:46 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** this function writes the string to stdout and returns how many chars
*/

int		ft_altstrify(const char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	write(1, s, i);
	return (i);
}
