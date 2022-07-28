#include <unistd.h>

char *ft_strcapitalize(char *str);

int   main(void)
{
   	char str[] = "oi, tudo bem? 42PPPalavras quarEnta-e-duas; cinquenta+e+um";

	printf("%s\n", ft_strcapitalize(str));
	return (0);
}
