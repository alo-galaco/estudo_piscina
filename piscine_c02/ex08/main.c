#include <stdio.h>

char	*ft_strlowcase(char *str);

int	main(void)
{
	char	*f;

	char	teste[] = "HADJUJ";
	f = teste;
	printf("%s\n", ft_strlowcase(f));
	return (0);
}
