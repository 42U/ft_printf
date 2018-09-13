/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 16:54:33 by issmith           #+#    #+#             */
/*   Updated: 2018/07/21 21:31:49 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static const char	*end_of_num(const char **str)
{
	const char *s;

	while (**str == '0')
		(*str)++;
	s = *str;
	while (*s)
	{
		if (!(*s >= '0' && *s <= '9'))
			break ;
		s++;
	}
	return (s);
}

int					ft_atoi(const char *str)
{
	const char			*end;
	const char			*s;
	unsigned long long	result;
	int					sign;

	while (*str == ' ' || *str == '\n' || *str == '\t' ||
			*str == '\r' || *str == '\v' || *str == '\f')
		str++;
	sign = 1;
	if (*str == '-' || *str == '+')
	{
		sign = (*str == '-') ? -1 : 1;
		str++;
	}
	end = end_of_num(&str);
	result = 0;
	s = str - 1;
	while (++s < end)
		result = result * 10LL + (unsigned long long)(*s - '0');
	if (result > 2147483648LL || (sign == 1 && result == 2147483648LL)
			|| (end - str) > 19)
		errno = ERANGE;
	if ((end - str) > 19 || result >= 9223372036854775808uLL)
		return ((sign == 1) ? -1 : 0);
	return (sign * (int)result);
}
