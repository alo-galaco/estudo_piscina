#include <stdio.h>

void ft_ft(int *nbr);

int main(void)
{
	int	nbr;
	int	*pnbr;
	
	pnbr = &nbr;

	ft_ft(&nbr);
	printf("%d\n",*pnbr);
	return (0);
}
