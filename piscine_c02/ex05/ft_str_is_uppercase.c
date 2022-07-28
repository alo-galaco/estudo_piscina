/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcristi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 12:30:37 by flcristi          #+#    #+#             */
/*   Updated: 2022/07/26 20:14:56 by flcristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		if (!(str[n] >= 'A' && str[n] <= 'Z'))
		return (0);
		n++;
	}
	return (1);
}