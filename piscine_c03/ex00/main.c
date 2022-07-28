#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2);

int		main()
{
	char s1[] = "Help";
	char s2[] = "Help";

	printf("%d", ft_strcmp(s1, s2));
}
