/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcristi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 13:34:20 by flcristi          #+#    #+#             */
/*   Updated: 2022/07/19 14:09:55 by flcristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = (*a) / (*b);
	mod = (*a) % (*b);
	*a = div;
	*b = mod;
}

int	main(void)
{
	int	a;
	int	b;
	int	*pa;
	int	*pb;

	pa = &a;
	pb = &b;
	a = 20;
	b = 10;
	ft_ultimate_div_mod(pa, pb);
	printf ("%d\n%d\n", a, b);
	return (0);
}
