/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsobolev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 09:37:50 by vsobolev          #+#    #+#             */
/*   Updated: 2026/07/19 09:37:53 by vsobolev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("expected: 0 (equal): %d\n", ft_strcmp("abc", "abc"));
	printf("expected: negative ('c' - 'd'): %d\n", ft_strcmp("abc", "abd"));
	printf("expected: positive ('d' - 'c'): %d\n", ft_strcmp("abd", "abc"));
	printf("expected: positive ('c' - '\\0'): %d\n", ft_strcmp("abc", "ab"));
	printf("expected: negative ('\\0' - 'c'): %d\n", ft_strcmp("ab", "abc"));
	return (0);
}
*/
