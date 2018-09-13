/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 13:37:37 by issmith           #+#    #+#             */
/*   Updated: 2018/09/12 20:24:04 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_identify(char c)
{
	if (c == 's' || c == 'c' || c == 'd' || c == 'p' || c == 'i' || c == 'o'
			|| c == 'u' || c == 'x')
		return (1);
	else
		return (0);
}

int		ft_printf(char *format, ...)
{
	t_param *node;
	va_list	ap;

//	node->tmp = NULL;
//	node->i = -1;
//	node->k = 0;
//	while (format[node->++i])
//		; // takes the above and initializes them
//	if (node->i == 0)
//		ft_putstr("error: format string is empty\n"); add to ft_init
	va_start(ap, format)
	if (ft_init(&node) != 0)
		if (node->i != 0)
		{
			node->i = 0;
			node->x = 0;
			if (format[node->i] == '%' && format[node->i + 1] != '%')
				node->k++;
//		va_start(ap, format);
		// the number of variadic arguments should match the k(count)
			while (format[node->x] != '\0')
				if ((format[node->x] == '%') && (node->c = format[x + 1]))
				{
//				node->c = format[x + 1];
					node->x += 2;
				   if (node->c == '%')
					   write(1, "%", 1);
				   else if (ft_identify(node->c) != 0)
					   ft_simplify(&node, &ap);
				}
			while (format[x] != '%' && format[x] != '\0')
				ft_putchar(format[node->x++]);
		}
	va_end(ap);
	ft_output(node);
	free(arr);
}
