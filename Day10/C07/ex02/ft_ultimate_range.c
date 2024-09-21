/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 17:42:33 by jdupuis           #+#    #+#             */
/*   Updated: 2024/09/19 14:06:11 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(int *range)
{
	int	i;

	i = 0;
	while (range[i])
		i++;
	return (i);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	*range = malloc(sizeof(int) * (max - min));
	if (!range)
		return (-1);
	while (i < (max - min))
	{
		(*range)[i] = min + i;
		i++;
	}
	return (i);
}
/*
int	main(void)
{
	int	min;
	int	max;
	int	*range;
	int	i;

	min = -10;
	max = 10;
	i = 0;
	printf("\nLa taille de range est : %d\n\n",
		ft_ultimate_range(&range, min, max));
	while (i < (max - min))
	{
		printf("|%d", range[i]);
		i++;
	}
	free(range);
	return (0);
}
*/
