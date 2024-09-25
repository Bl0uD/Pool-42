/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BSQ.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 15:34:27 by jdupuis           #+#    #+#             */
/*   Updated: 2024/09/25 21:00:42 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_bsq(char **map, int nb_lines)
{
	int	curs_co[3];
	int	stop_co[3];
	int	greatest;
	int	current;
	int	len;

	len = ft_strlen(map[1]);
	printf("%d", len);
	curs_co[0] = 1;
	curs_co[1] = 0;
	greatest = 0;
	stop_co[0] = 0;
	stop_co[1] = 1;
	stop_co[2] = 2;
	while ((curs_co[0] || curs_co[1]))
	{
	//	printf("1 \n");
		while ((greatest < len - curs_co[1] || greatest < nb_lines - curs_co[0])
				&& (map[stop_co[0]][stop_co[1]]))
		{
	//		printf("greatest : %d\n", greatest);
			stop_co[0] = ft_check_obstacle(map, curs_co, nb_lines)[0];
			stop_co[1] = ft_check_obstacle(map, curs_co, nb_lines)[1];
			stop_co[2] = ft_check_obstacle(map, curs_co, nb_lines)[2];
			if (stop_co[2] <= 0)
				curs_co[1]++;
			if (stop_co[2] > 0)
				curs_co[1] = stop_co[2];
			greatest = ft_is_greatest_area(greatest, current);
			current = greatest;
		}
		curs_co[0]++;
		curs_co[1] = 0;
	}
	map = ft_write_over_map(map, curs_co, greatest);
	ft_print(map);
}
