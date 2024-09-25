/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_over__map.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 15:55:17 by norabino          #+#    #+#             */
/*   Updated: 2024/09/25 16:51:17 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	**ft_write_over_map(char	**map, int *curs_co, int len)
{

	int	i = curs_co[0];
	int	j = curs_co[1];

	while (i < len)
	{
		while (j < len)
			map[i][j] = map[0][ft_strlen(map[0]) - 2];
	}
	return (map);
}
