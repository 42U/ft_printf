#include "libft.h"


int main()
{

	setlocale(LC_ALL, "");
	const struct lconv *const currentlocale = localeconv();
	printf("in the current locale: %s\n", currentlocale->currency_symbol);
	printf("in the current locale: %c\n", currentlocale->p_sign_posn);
	printf("in the current locale: %s", currentlocale->decimal_point);


	return (0);
}
