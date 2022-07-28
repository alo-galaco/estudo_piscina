#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	a[30] = "Changetheworld!";
	char	b[30] = "Theuniverse!";

	printf ("saída: %s\n", ft_strncpy(a, b, 20));
}
