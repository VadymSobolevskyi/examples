/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsobolev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 17:32:23 by vsobolev          #+#    #+#             */
/*   Updated: 2026/07/21 17:32:26 by vsobolev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
#include <stdio.h>

int	main()
{
	printf("result: %d\n", ft_strlen("abcd"));
	printf("result: %d\n", ft_strlen(""));
	return (0);
}
*/
