/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsobolev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 17:15:05 by vsobolev          #+#    #+#             */
/*   Updated: 2026/07/16 17:15:15 by vsobolev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

void	ft_swap(int *a, int *b);
*/
void	ft_swap(int *a, int *b)
{
	int	buf;

	buf = *a;
	*a = *b;
	*b = buf;
}
/*
int	main(void)
{
	int av = 1;
	int bv = 2;
	printf("a, b before: %d, %d\n", av, bv);
	ft_swap(&av, &bv);
	printf("a, b after: %d, 	%d\n", av, bv);
	return (0);
}
*/
