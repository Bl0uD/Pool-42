/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_first_line.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:40:21 by jdupuis           #+#    #+#             */
/*   Updated: 2024/09/23 13:32:32 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* La carte est invalide si un caractère manque sur la première ligne, 
ou si deux caractères (parmis vide, plein, et obstacles) sont identiques.*/

#include "ft.h"

int	ft_check_first_line(char **map)
{
	int	i;

	if (ft_strlen(map[0]) != 4)
		return (-1);
	i = 0;
	while (map[0][i] != map[0][i + 1] && map[0][i - 1])
		i++;
	if (map[0][i] == map[0][i + 1])
		return (-1);
	return (1);
}
