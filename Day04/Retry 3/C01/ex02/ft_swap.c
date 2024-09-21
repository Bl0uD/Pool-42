/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 11:58:53 by jdupuis           #+#    #+#             */
/*   Updated: 2024/09/05 18:11:55 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
/*
int	main(void)
{
	int	c = 1;
	int	d = 2;
	int	*a = &c;
	int	*b = &d;

	ft_swap(a, b);
	printf("%d %d", *a, *b);
	return (0);
}
*/
