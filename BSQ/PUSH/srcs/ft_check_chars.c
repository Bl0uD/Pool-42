/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_chars.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:39:19 by jdupuis           #+#    #+#             */
/*   Updated: 2024/09/24 16:48:45 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Les caractères présent dans la carte doivent être uniquement ceux 
présentés à la première ligne.*/

#include "ft.h"

int	ft_v(char **map, char *empty, char *obstacle, int nb_lines)
{
	int		i;
	int		j;

	i = 1;
	while (i <= nb_lines)
	{
		j = 0;
		while (map[i][j])
		{
			if ((map[i][j] != *empty)
					&& (map[i][j] != *obstacle)
					&& (map[i][j] != '\n'))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_check_chars(char **map, int nb_lines)
{
	char	empty;
	char	obstacle;
	int		count;

	count = 1;
	while (nb_lines > 9)
	{
		count++;
		nb_lines /= 10;
	}
	if (ft_strlen(map[0]) != 4 + count)
		return (0);
	empty = map[0][ft_strlen(map[0]) - 4];
	obstacle = map[0][ft_strlen(map[0]) - 3];
	return (ft_v(map, &empty, &obstacle, nb_lines));
}
