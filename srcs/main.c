/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 20:14:28 by issmith           #+#    #+#             */
/*   Updated: 2018/09/11 23:33:55 by issmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
	char	*tmp;
	char	**ptr;

	i = -1;
	while (args[++i])
		;
	if (i == 0)
		ft_putstr("error: format string is empty\n");
	else
	{
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
				if (f == '%')
					write(1, "%", 1);
				else if (ft_identify(f) != 0)
				{
					if (f == 's')
						ft_putstr(va_arg(ap, char*));
					else if (f == 'd')
						ft_putnbr(va_arg(ap, int));
					else if (f == 'i')
						ft_putnbr((signed int)va_arg(ap, signed int));
					else if (f == 'c')
					{
						a = (unsigned char)va_arg(ap, int);
						write(1, &a, 1);
					}
					else if (f == 'o')
						ft_putstr(ft_convert(va_arg(ap, unsigned int), 8));
					else if (f == 'u')
						ft_putnbr((unsigned int)va_arg(ap, unsigned int));
					else if (f == 'x')
						ft_putstr(ft_convert(va_arg(ap, unsigned int), 16));
					else if (f == 'p')
					{
						tmp = va_arg(ap, char *);
						ptr = &tmp;
						ft_putstr(*ptr);
					}
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
}

int		main()
{
	int			date;
	
	date = 6;
	setbuf(stdout, NULL);
	
	// testing happens here
	ft_printf("%s%d", "i forgot to check to see what would happen if i try to do this",
			(565 / 2 + 934 / 42 + (4 * 2)));
	printf("think %s%s%s%d, "more",  "string", "so beautiful, and_then", " lol ", (565 / (2 + 93) + 4 / (42 + (4 * 2))));
	free(param);
	//	while(1);
	return (0);
}
