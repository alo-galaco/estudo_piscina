/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcristi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 19:26:29 by flcristi          #+#    #+#             */
/*   Updated: 2022/07/11 11:52:15 by flcristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_print_alphabet(void)
{	
	char	i;

	i = 97;
	while (i <= 122)
	{
		write (1, &i, 1);
		i++;
	}
}
