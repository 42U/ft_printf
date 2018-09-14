/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_simplify.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 14:56:14 by issmith           #+#    #+#             */
/*   Updated: 2018/09/14 15:19:35 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** this evaluates all the arguments and identifiers sent in from the ft_printf
*/

void	ft_simplify(t_param **node, va_list *ap)
{
	if (node[0]->c == 's')
		node[0]->k += ft_altstrify(va_arg(ap[0], char*));
	else if (node[0]->c == 'd')
		ft_trackify(&node, &ap, node[0]->c);
	else if (node[0]->c == 'i')
		ft_trackify(&node, &ap, node[0]->c);
	else if ((node[0]->c == 'c') && (node[0]->c =
				(unsigned char)va_arg(ap[0], int)))
		ft_trackify(&node, &ap, 'X');
	else if (node[0]->c == 'o')
		node[0]->k += ft_altstrify(ft_convert(va_arg(ap[0], unsigned int), 8));
	else if (node[0]->c == 'u')
		ft_trackify(&node, &ap, node[0]->c);
	else if (node[0]->c == 'x')
		node[0]->k += ft_altstrify(ft_convert(va_arg(ap[0], unsigned int), 16));
	else if (node[0]->c == 'p')
		ft_trackify(&node, &ap, node[0]->c);
	else
	{
		ft_putstr("error: unrecognized identifier!");
		exit(0);
	}
}
