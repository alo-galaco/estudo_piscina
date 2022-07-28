/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcristi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 11:14:22 by flcristi          #+#    #+#             */
/*   Updated: 2022/07/19 13:29:12 by flcristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

int	main(void)
{
	int	*pa;
	int	*pb;
	int	a;
	int	b;

	pa = &a;
	pb = &b;
	a = 20;
	b = 40;
	ft_swap(pa, pb);
	printf ("%d\n", a);
	printf ("%d\n", b);
	return (0);
}
