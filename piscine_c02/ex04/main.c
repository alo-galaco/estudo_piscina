#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	int	a;

	a = 0;
	char teste[] = "avbfdhsj";
	char	vazio[] = "";
	char	errado[] = "025";
	char	errado2[] = "AYHFssda:HU";

	printf("%d\n", ft_str_is_lowercase(teste));
	printf("%d\n", ft_str_is_lowercase(vazio));
	printf("%d\n", ft_str_is_lowercase(errado));
	printf("%d\n", ft_str_is_lowercase(errado2));
	return (0);
}
