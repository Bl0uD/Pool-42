/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 16:58:23 by jdupuis           #+#    #+#             */
/*   Updated: 2024/09/11 22:22:51 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	n;

	i = 1;
	n = nb;
	if (power < 0)
		return (0);
	if (power == 0 || nb == 0)
		return (1);
	while (i < power)
	{
		nb = nb * n;
		i++;
	}
	return (nb);
}
/*
int	main(void)
{
	int	nb;
	int power;

	nb = 2;
	power = 4;
	printf("%d", ft_iterative_power(nb, power));
	return (0);
}
*/
