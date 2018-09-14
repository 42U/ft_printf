#include "ft_printf.h"

int	main()
{
	char *str = "this is a string\n";
	ft_printf("%p%s", &str, str);
	printf("%p%s", &str, str);
	return (0);
}
