/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcristi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 13:08:46 by flcristi          #+#    #+#             */
/*   Updated: 2022/07/19 13:25:35 by flcristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int	main(void)
{
	int	a;
	int	b;
	int	*pa;
	int	*pb;

	pa = &a;
	pb = &b;
	a = 10;
	b = 2;
	ft_div_mod(a, b, pa, pb);
	printf("%d\n%d\n", a, b);
	return (0);
}
