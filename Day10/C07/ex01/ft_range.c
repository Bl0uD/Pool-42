/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 17:02:39 by jdupuis           #+#    #+#             */
/*   Updated: 2024/09/19 14:04:04 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*tab;

	i = 0;
	if (min >= max)
		return (0);
	tab = malloc(sizeof(int) * (max - min));
	if (!tab)
		return (0);
	while (i < (max - min))
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
/*
int	main(void)
{
	int	min;
	int	max;
	int	i;
	int *tab;

	min = -10;
	max = 10;
	i = 0;
	tab = ft_range(min , max);
	while (i < (max - min))
	{
		printf("%d", tab[i]);
		i++;
	}
	return (0);
}
*/
