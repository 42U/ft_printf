/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 20:14:28 by issmith           #+#    #+#             */
/*   Updated: 2018/09/09 05:23:34 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*(
void		ft_parse(char *str, t_param **node)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (str[i] == '%')
			node[0]->c = str[i + 1];

	}
}

int		ft_argc(char *str)
{
	t_param		*node;
	int			i;

	if (!node->head)
		node = node->head;
	i = 0;
	while (str[i] != '%')
		i++;
	if (i != 0)
	{
		node->data = (char *)malloc(sizeof(char) * i + 1);
		node->data = ft_strlcpy(node->data, str, i);
	}
	else if (i == 0)
		ft_parse(str, &node);
	return (0);
	// return (0);
	// return (1);
}
*/


int			ft_identify(char f)
{
	if (f == 's' || f == 'c' || f == 'd' || f == 'p' || f == 'i' || f == 'o'
			|| f == 'u' || f == 'x')
		return (1);
	else
		return (0);
}

void		ft_printf(char *args, ...)
{
//	t_param *node;
	va_list	ap;
	char	f;
	char	**arr;
	int		i;
	int		x;
	unsigned char a;

	arr = (char **)malloc(sizeof(char *) * 100); // this is bad need exact number 
	i = 0;
	x = 0;
	va_start(ap, args);
	// could build a program that parses the input string quickly
	while (args[x] != '\0')
	{
		if (args[x] == '%')
		{
			f = args[x + 1];
			x += 2;
			if (ft_identify(f) != 0)
			{
				if (f == 's')
					ft_putstr(va_arg(ap, char*));
			else if (f == 'd')
				ft_putnbr(va_arg(ap, int));
			else if (f == 'c')
			{
				a = (unsigned char)va_arg(ap, int);
				write(1, &a, 1);
			}
			else if (f == 'o')
				ft_putstr(ft_convert(va_arg(ap, unsigned int), 8));
			else if (f == 'x')
				ft_putstr(ft_convert(va_arg(ap, unsigned int), 16));
			else
				ft_putstr("error\n");
			}
		}
		while (args[x] != '%' && args[x] != '\0')
			ft_putchar(args[x++]); // this is slow and i want fast
	}
	i = -1;
	while (arr[++i])
		ft_putstr(arr[i]);
	va_end(ap);
	free(arr);
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
//	char		weekday[] = "Monday";
//	char		msg[] = "Today is ";
//	char		month[] = "August";
	int			date;
	
	date = 6;
	setbuf(stdout, NULL);
	param = (t_param*)malloc(sizeof(t_param) + 1);
	ft_null(&param);
	
	
	// testing happens here
//	ft_printf("%s%s the %dth of %s!!!\n", msg, weekday, date, month);
	ft_printf("%s\n%c\n%d\n%o\n%x\n", "test", 'X', 10, 7, 29);

	ft_putstr("\nsystem printf:\n");
//	printf("%s%s the %dth of %s!!!\n", msg, weekday, date, month);
	printf("%s\n%c\n%d\n%o\n%x\n", "test", 'X', 10, 7, 29);
	


	//	printf("%s\n%c\n%d\n%p\n%i\n%o\n%u\n%x\n", "test", 'X', 10, ptr, 7, 8, day, 29);
	//	printf("3\n");
	//	printf("%s, %s %d, %.2d:%.2d\n", weekday, month, day, hour, min);
	// free them all
	free(param);
	//	while(1);
	return (0);
}
