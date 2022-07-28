#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	int	a;

	a = 0;
	char teste[] = "%$%";
    char errado[] = "µ";
    char vazio[] = "";

    printf("%d\n", ft_str_is_printable(teste));
    printf("%d\n", ft_str_is_printable(errado));
    printf("%d\n", ft_str_is_printable(vazio));
    return (0);
}
