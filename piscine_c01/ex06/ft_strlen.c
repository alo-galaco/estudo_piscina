/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcristi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 17:20:58 by flcristi          #+#    #+#             */
/*   Updated: 2022/07/24 18:16:06 by flcristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		str++;
	}
	return (*str);
}
int	main(void)
{
	char	y[] = "Eeve";
	char 	a;
	a = ft_strlen(y);
	printf("%c\n", a);
	return (0);
}
