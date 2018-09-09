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

int		ft_argc(char *str)
{
	

	str_count = 0;
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1] == 's')
		{
			str_count++;
			i += 2;
		}

	}
}

void		ft_printf(char *args, ...)
{
	t_param *node;
	va_list	ap;

	i = 0;
	va_start(ap, args);
	// could build a program that parses the input string quickly
	while (args[x])
	{
		while (args[x] != '%')
			ft_putchar(args[x]); // this is slow and i want fast
		arr[i] = va_arg(ap, char*);
		i++;
	}
}

void		ft_putstr(const char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	write(1, s, i);
}

void		ft_null(t_param **param)
{
	param[0]->data = NULL;
	param[0]->c = 0;
	param[0]->ac = 0;
	param[0]->inc = 0;
	param[0]->next = NULL;
	param[0]->prev = NULL;
	param[0]->head = NULL;
	param[0]->curr = NULL;
}

int		main()
{
	t_param		*param;
	char		weekday[] = "mon";
	char		month[] = "null";
	char		*ptr;
	char		c;
	unsigned int	day = 6;
	int		hour = 8;
	int		min = 19;
	setbuf(stdout, NULL);
	param = (t_param*)malloc(sizeof(t_param) + 1);
	ft_null(&param);
	param->data = "this just became a big string like my string";
	ptr = param->data;
	c = param->c;

	ft_putstr(param->data);
	// testing happens here
//	ft_printf("%s, %s", weekday, month);
//	printf("%s\n%c\n%d\n%p\n%i\n%o\n%u\n%x\n", "test", 'X', 10, ptr, 7, 8, day, 29);
//	printf("3\n");
//	printf("%s, %s %d, %.2d:%.2d\n", weekday, month, day, hour, min);
	// free them all
	free(param);
	main();
	return (0);
}
