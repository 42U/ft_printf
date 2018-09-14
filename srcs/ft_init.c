/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 15:26:14 by issmith           #+#    #+#             */
/*   Updated: 2018/09/14 15:05:43 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_initify(t_param **node, char *format)
{
	node[0]->tmp = NULL;
	node[0]->i = 0;
	node[0]->k = 0;
	node[0]->x = 0;
	while (format[node[0]->i])
		node[0]->i++;
	if (node[0]->i == 0)
	{
		ft_putstr("usage error: format identifier string is empty\n");
		exit(0);
	}
	return (1);
}
