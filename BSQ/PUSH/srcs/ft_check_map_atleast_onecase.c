/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map_atleast_onecase.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:38:04 by jdupuis           #+#    #+#             */
/*   Updated: 2024/09/23 14:03:00 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Il y a au moins une ligne d’au moins une case.

#include "ft.h"

int	ft_check_map_atleast_onecase(char **map)
{
	char	empty;
	int		i;
	int		j;
	int		is_empty;

	empty = map[0][1];
	i = 1;
	while (map[i])
	{
		j = 0;
		is_empty = 0;
		while (map[i][j])
		{
			if (map[i][j] == empty)
			{
				is_empty = 1;
				break ;
			}
			j++;
		}
		if (is_empty == 0)
			return (0);
		i++;
	}
	return (1);
}
