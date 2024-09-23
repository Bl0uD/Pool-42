/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map_endline.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:38:42 by jdupuis           #+#    #+#             */
/*   Updated: 2024/09/23 12:44:57 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// À la fin de chaque ligne il y a un retour à la ligne.

#include "ft.h"

int	ft_check_map_endline(char **map)
{
	int	i;
	int	line_size;

	line_size = ft_strlen(map[1]);
	i = 1;
	while (map[i])
	{
		if (map[i][line_size - 1] != '\n')
			return (0);
		i++;
	}
	return (1);
}
