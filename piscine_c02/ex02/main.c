#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	int	a;

	a = 0;
	char teste[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char errado[] = "ABCëïöü){}[]!?@#$&*wxyzWXYZ";
	char vazio[] = "";

    printf("%d\n", ft_str_is_alpha(teste));
	printf("%d\n", ft_str_is_alpha(errado));
	printf("%d\n", ft_str_is_alpha(vazio));
    return (0);
}
