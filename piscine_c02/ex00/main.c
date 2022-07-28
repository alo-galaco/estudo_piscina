#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	a[] = "Pokémon gooo";
	char	b[] = "Escolho você";

	printf("%s\n", a);
   	ft_strcpy(a, b);
	printf("%s\n", a);
	return (0);
}
