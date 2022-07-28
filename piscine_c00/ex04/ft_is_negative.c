/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcristi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 11:25:24 by flcristi          #+#    #+#             */
/*   Updated: 2022/07/12 14:00:10 by flcristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	int	l;
	int	m;

	l = 'N';
	m = 'P';
	if (n >= 0)
	{
		write(1, &m, 1);
	}
	else
	{
		write(1, &l, 1);
	}
}
