#include "ft_printf.h"

int	main()
{
	char *str = "this is a string\n";
	ft_putnbr(ft_printf("%p%s", &str, str));
	ft_putnbr(printf("%p%s", &str, str));
	return (0);
}
