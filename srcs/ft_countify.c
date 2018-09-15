/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countify.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 15:46:52 by issmith           #+#    #+#             */
/*   Updated: 2018/09/15 11:07:41 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** this just counts the chars printed to the screen if identifier is %c
*/

void	ft_countify(t_param **node, char *format)
{
	ft_putchar(format[node[0]->x++]);
	node[0]->k += 1;
}
