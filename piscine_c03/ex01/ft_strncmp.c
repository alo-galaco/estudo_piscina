/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcristi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 16:51:26 by flcristi          #+#    #+#             */
/*   Updated: 2022/07/27 19:11:51 by flcristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int	sub;

	i = 0;
	sub = 0;
	while ((i < n) && !sub  && (s1[i] != '\0') && (s2[i] != '\0'))
	{
		sub = (s1[i] - s2[i]);
		i++;
	}
	return (sub);
}
