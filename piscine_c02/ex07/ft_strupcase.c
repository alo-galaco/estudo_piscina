/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcristi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 15:38:39 by flcristi          #+#    #+#             */
/*   Updated: 2022/07/26 17:41:17 by flcristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] >= 'a' && str[a] <= 'z')
		str[a] = (str[a] - 32);
		a++;
	}
	return (str);
}

int	main(void)
{
	char	*p;

	char teste[] = "avbfdhsj";
	p = teste;
	printf("%s\n", ft_strupcase(p));
	return (0);
}
