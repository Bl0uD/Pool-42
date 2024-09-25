/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_obstacle.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 09:50:54 by jdupuis           #+#    #+#             */
/*   Updated: 2024/09/25 20:49:04 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	*ft_check_obstacle(char **map, int *curs_co, int nb_lines)
{
	int	l = curs_co[0] + 1;
	int	c = curs_co[1] + 1;
	int	il = 0;
	int	ic = 0;
	int	tc = curs_co[1] + 1;;
	int	tl = curs_co[0] + 1;
	int	len;
	int	obstacle_d = 0;
	int	obstacle_b = 0;
	char	obstacle = map[0][ft_strlen(map[0]) - 3];

	len = ft_strlen(map[1]);
	if (map[curs_co[0]][curs_co[1]] == obstacle) // Check curseur est un obstacle CHECK 1
	{
		curs_co[2] = 0; // -1 : curseur = obstacle
		curs_co[1] += 1;
		return (curs_co);
	}
	while ((map[l + il][c] || map[l][c + ic]) && obstacle_b != 1 && obstacle_d != 1) // On check en L inverse uniquement CHECK 2
	{
		obstacle_d = 0;
		obstacle_b = 0;
		while (map[l +il][c + ic] != obstacle && map[l +il] && map[c + ic]) // On check la diagonale CHECK 3
		{
			if (obstacle_b != 1 && tl < len) // On check les lignes et les col (jusquau stop)restantes CHECK 4
			{
				if (map[tl + 1][c] == obstacle)
				{
					obstacle_b = 1;
					break ;
				}
				tl++;
			}
			if (obstacle_d != 1 && tc < nb_lines) // On check les lignes et les col (jusquau stop)restantes CHECK 4
			{
				if (map[l][tc + 1] == obstacle)
				{
					obstacle_d = 1;
					break ;
				}
				tc++;
			}
		}
		curs_co[0] = tl;
		curs_co[1] = tc;
		if (obstacle_d && !obstacle_b) // positif pour l'obstacle a droite avec son indice +1
			curs_co[2] = c + 1;
		if (obstacle_b && !obstacle_d) // negatif pour l'obstacle en bas avec son indice +1
			curs_co[2] = -l + 1;
		if (map[l + il + 1])
			il++;
		if (map[c + ic + 1] && il == (nb_lines - 1))
		{
			ic++;
			il = 0;
		}
		
	}
	return (curs_co);
}
/*--------------------
		LEGEND:

--------------------*/
