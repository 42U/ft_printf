/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 13:37:37 by issmith           #+#    #+#             */
/*   Updated: 2018/09/14 15:01:34 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** this just checks to make sure the format identifier is on the list of ones
** we need to handle. if a flag is sent that isn't a part of the set 0 is ret.
*/

static int	ft_identify(char c)
{
	if (c == 's' || c == 'c' || c == 'd' || c == 'p' || c == 'i' || c == 'o'
			|| c == 'u' || c == 'x')
		return (1);
	else
		return (0);
}

/*
** this is the brain of my ft_printf. here i start the veradic ft_'s then
** check the param sent in the str *format ft_identify handles that
** then if valid params were sent ft_simplify happens. 
*/

int			ft_printf(char *format, ...)
{
	t_param *node;
	va_list	ap;

	va_start(ap, format);
	node = (t_param *)malloc(sizeof(t_param));
	if (ft_initify(&node, format) == 1)
		if (node->i != 0)
		{
			node->i = 0;
			while (format[node->x] != '\0')
			{
				if ((format[node->x] == '%') && (node->c = format[node->x + 1]))
				{
					node->x += 2;
					if (node->c == '%')
						write(1, "%", 1);
					else if (ft_identify(node->c) != 0)
						ft_simplify(&node, &ap);
				}
				while (format[node->x] != '%' && format[node->x] != '\0')
					ft_putchar(format[node->x++]);
			}
		}
	va_end(ap);
	return (node->k);
}
