/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcristi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 10:12:21 by flcristi          #+#    #+#             */
/*   Updated: 2022/07/19 13:30:23 by flcristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int	main(void)
{
	int nbr;
	int	*pnbr;
	int	**pnbr2;
	int	***pnbr3;
	int	****pnbr4;
	int	*****pnbr5;
	int	******pnbr6;
	int	*******pnbr7;
	int	********pnbr8;
	int	*********pnbr9;

	nbr = 12;
	pnbr = &nbr;
	pnbr2 = &pnbr;
	pnbr3 = &pnbr2;
	pnbr4 = &pnbr3;
	pnbr5 = &pnbr4;
	pnbr6 = &pnbr5;
	pnbr7 = &pnbr6;
	pnbr8 = &pnbr7;
	pnbr9 = &pnbr8;

	ft_ultimate_ft (pnbr9);
	printf ("%d\n", *********pnbr9);
	return (0);	
}
