#include "ft_printf.h"

int	main()
{
	char *str = "this is a string\n";

	ft_printf("\033[32mthis is my printf: \033[0m");
	ft_putnbr(ft_printf("hello %p%s\n", &str, str));
	ft_printf("\n");
	ft_printf("\033[31mthis is the system: \033[0m");
	ft_putnbr(printf("hello %p%s\n", &str, str));
	return (0);
}
