/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map_len.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:37:24 by jdupuis           #+#    #+#             */
/*   Updated: 2024/09/23 17:33:02 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Toutes les lignes doivent avoir la même longueur.

#include "ft.h"

int	ft_check_line_len(char **map)
{
	int	i;
	int	line_size;

	line_size = ft_strlen(map[1]);
	i = 2;
	while (map[i])
	{
		if (ft_strlen(map[i]) != line_size)
			return (0);
		i ++;
	}
	return (1);
}
