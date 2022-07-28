#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int main(void)
{
	int	a;

	a = 0;
	char teste[] = "AHFNEKJ";
	char errado[] = "ahjh 545";
	char vazio[] = "";
	printf("%d\n", ft_str_is_uppercase(teste));
	printf("%d\n", ft_str_is_uppercase(errado));
	printf("%d\n", ft_str_is_uppercase(vazio));
}
