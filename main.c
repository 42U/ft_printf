/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 20:14:28 by issmith           #+#    #+#             */
/*   Updated: 2018/09/08 00:03:56 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_parse(char *str, t_param **node)
{
	int i;

	i = -1;
	while (str[++i])
	{
		if (str[i] == '%')
			node->c = str[i + 1];

	}
}

int		ft_argc(char *str)
{
	t_param *node;
	if (!node->head)
		node = node->head;
	i = 0;
	while (str[i] != '%')
		i++;
	if (i != 0 && node->data = (char *)malloc(sizeof(char) * i + 1))
		node->data = ft_strlcpy(str, i);
	else if (i == 0)
		ft_parse(str, &node);
}

void		ft_printf(char *args, ...)
{
	int	i;
	int	ac;
	int	sum;
	va_list	ap;

	ac = ft_argc(args);
	i = 0;
	va_start(ap, args);
	// hmmm
	while (i < ac)
	{
		arr[i] += va_arg(ap, char*);
		i++;
	}
}



int		main()
{
	char		weekday[] = "mon";
	char		month[] = "null";
	char		*ptr;
	unsigned int	day = 6;
	int		hour = 8;
	int		min = 19;
	setbuf(stdout, NULL);
	ptr = NULL;

	

	// testing below	
//	ft_printf("%s, %s", weekday, month);
//	printf("%s\n%c\n%d\n%p\n%i\n%o\n%u\n%x\n", "test", 'X', 6, ptr, 7, 8, day, 29);
//	printf("3\n");
//	printf("%s, %s %d, %.2d:%.2d\n", weekday, month, day, hour, min);
	return (0);
}
