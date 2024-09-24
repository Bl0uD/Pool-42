/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map_len.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:37:24 by jdupuis           #+#    #+#             */
/*   Updated: 2024/09/24 16:19:00 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Toutes les lignes doivent avoir la même longueur.

#include "ft.h"

int	ft_check_line_len(char **map, int nb_lines)
{
	int	i;
	int	line_size;

	line_size = ft_strlen(map[1]);
	i = 2;
	while (i <= nb_lines)
	{
		if (ft_strlen(map[i]) != line_size)
			return (0);
		i ++;
	}
	return (1);
}
