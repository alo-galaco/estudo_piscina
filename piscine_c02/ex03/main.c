#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	int	a;

	a = 0;
	char teste[] = "0123456789";
	char vazio[] = "";
	char errado[] = "Adf 154 ek";

	printf("%d\n", ft_str_is_numeric(teste));
	printf("%d\n", ft_str_is_numeric(errado));
	printf("%d\n", ft_str_is_numeric(vazio));
    return (0);
}
