/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ado-prad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 16:16:58 by ado-prad          #+#    #+#             */
/*   Updated: 2022/07/10 17:01:25 by ado-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int		col;
	int		line;

	col = 1;
	line = 1;
	while (line <= y && x > 0)
	{
		while (col <= x)
		{
			if ((line == 1 && col == 1)
				|| (line == y && col == x && x != 1 && y != 1))
				ft_putchar('/');
			else if ((line == 1 && col == x) || (line == y && col == 1))
				ft_putchar('\\');
			else if ((line == 1 || line == y)
				|| ((line != 1 || line != y) && (col == 1 || col == x)))
				ft_putchar('*');
			else
				ft_putchar(' ');
			col++;
		}	
		col = 1;
		ft_putchar('\n');
		line++;
	}	
}
