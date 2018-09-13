/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putrstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 11:56:38 by issmith           #+#    #+#             */
/*   Updated: 2018/09/12 12:33:17 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putrstr(const char *s)
{
	int		i;
	char	*alt;

	i = 0;
	while (s[i])
		i++;
	alt = (char *)malloc((sizeof(char) * i) + 2);
	alt[0] = '\r';
	i = -1;
	while (s[++i])
		alt[i + 1] = s[i];
	alt[i + 1] = '\0';
	write(1, alt, i + 1);
}
