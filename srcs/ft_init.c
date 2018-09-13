/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 15:26:14 by issmith           #+#    #+#             */
/*   Updated: 2018/09/12 19:50:57 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_init(t_param **node)
{
	node[0]->tmp = NULL;
	node[0]->i = -1;
	node[0]->k = 0;
	while (format[node->++i])
		;
	if (*node->i == 0)
	{
		ft_putstr("error: format string is empty\n");
		exit(0);
	}
}
