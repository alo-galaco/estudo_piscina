/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcristi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 18:12:15 by flcristi          #+#    #+#             */
/*   Updated: 2022/07/26 21:23:26 by flcristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char *ft_strcapitalize(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		while (str[a] >= 'A' && str[a] <= 'Z')
		str[a] += 32;
		if (str[0] >= 'a' && str[0] <= 'z') 
		str[0] -= 32;
		while ((str[a] >= 'a' && str[a] <= 'z') 
		&& (!(str[a -1] >= 'a' && str[a -1] <= 'z') && !(str [a-1] >= 48 && str[a -1] <= 57)) 
		&& (!(str[a -1] >= 'A' && str[a -1] <= 'Z'))) 
		{
			str[a] -= 32;
		}
		a++;
	}
	return (str);
}
