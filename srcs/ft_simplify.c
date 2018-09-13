/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_simplify.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 14:56:14 by issmith           #+#    #+#             */
/*   Updated: 2018/09/12 20:24:09 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_simplify(t_param **node, int tmp, char **ptr)
{
	if (*node->c == 's')
		ft_putstr(va_arg(ap, char*));
	else if (*node->c == 'd')
		ft_putnbr(va_arg(ap, int));
	else if (*node->c == 'i')
		ft_putnbr((signed int)va_arg(ap, signed int));
	else if (*node->c == 'c')
	{
		a = (unsigned char)va_arg(ap, int);
		write(1, &a, 1);
	}
	else if (*node->c == 'o')
		ft_putstr(ft_convert(va_arg(ap, unsigned int), 8));
	else if (*node->c == 'u')
		ft_putnbr((unsigned int)va_arg(ap, unsigned int));
	else if (*node->c == 'x')
		ft_putstr(ft_convert(va_arg(ap, unsigned int), 16));
	else if (*node->c == 'p')
	{
		tmp = va_arg(ap, unsigned long long);
		ptr = &tmp;
		ft_putstr(*ptr);
	}
	else
		ft_putstr("error: invalid parameter passed to ft_printf\n");
}
