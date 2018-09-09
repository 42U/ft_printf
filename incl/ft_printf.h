/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 20:25:54 by issmith           #+#    #+#             */
/*   Updated: 2018/09/09 04:14:39 by issmith          ###   ########.fr       */
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
	char			*data;
	char			*str;
	char			*tmp;
	char			c;
	int				ac;
	int				inc;
	struct s_param	*next;
	struct s_param	*prev;
	struct s_param	*head;
	struct s_param	*curr;
}					t_param;

#endif
