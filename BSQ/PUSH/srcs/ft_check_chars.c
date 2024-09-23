/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_chars.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:39:19 by jdupuis           #+#    #+#             */
/*   Updated: 2024/09/23 14:21:23 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Les caractères présent dans la carte doivent être uniquement ceux 
présentés à la première ligne.*/

#include "ft.h"

int	ft_v(char **map, char *empty, char *obstacle, char *full)
{
	int		i;
	int		j;

	i = 1;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if ((map[i][j] != *empty)
					&& (map[i][j] != *obstacle)
					&& (map[i][j] != *full)
					&& (map[i][j] != '\n'))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_check_chars(char **map)
{
	char	empty;
	char	obstacle;
	char	full;

	if (ft_strlen(map[0]) > 5)
		return (0);
	empty = map[0][1];
	obstacle = map[0][2];
	full = map[0][3];
	return (ft_v(map, &empty, &obstacle, &full));
}
