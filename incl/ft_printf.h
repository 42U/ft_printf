/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 20:25:54 by issmith           #+#    #+#             */
/*   Updated: 2018/09/14 15:49:23 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include "../libft/libft.h"

typedef struct		s_param
{
	char			*tmp;
	char			c;
	int				i;
	int				k;
	int				x;
}					t_param;

void				ft_countify(t_param **node, char *format);
void				ft_trackify(t_param ***node, va_list **ap, char c);
int					ft_altstrify(const char *s);
int					ft_printf(char *format, ...);
int					ft_initify(t_param **node, char *format);
void				ft_simplify(t_param **node, va_list *ap);


#endif
