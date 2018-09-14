/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trackify.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 13:43:41 by issmith           #+#    #+#             */
/*   Updated: 2018/09/14 15:18:43 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** this handles the number based identifiers because they are special they
** get their own function
*/

void	ft_trackify(t_param ***node, va_list **ap, char c)
{
	if (c == 'd')
		node[0][0]->k += ft_altstrify(ft_itoa(va_arg(ap[0][0], int)));
	else if (c == 'i')
		node[0][0]->k += ft_altstrify(ft_itoa((signed int)va_arg(ap[0][0],
						signed int)));
	else if (c == 'X')
	{
		node[0][0]->k += 1;
		write(1, &node[0][0]->c, 1);
	}
	else if (c == 'u')
		node[0][0]->k +=
			ft_altstrify(ft_itoa((unsigned int)va_arg(ap[0][0], unsigned int)));
	else if (c == 'p')
	{
		node[0][0]->k += ft_altstrify("0x7ffe");
		node[0][0]->k +=
			ft_altstrify(ft_convert((unsigned long)va_arg(ap[0][0], void *),
						16));
	}
}
