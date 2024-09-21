/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 19:42:53 by jdupuis           #+#    #+#             */
/*   Updated: 2024/09/11 20:44:40 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	n;

	i = 1;
	n = 1;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		n = i * n;
		i++;
	}
	return (n);
}
/*
int	main(void)
{
	int	nb;

	nb = 5;
	printf("%d",ft_iterative_factorial(nb));
	return (0);
}
*/
