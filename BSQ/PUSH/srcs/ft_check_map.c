/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 09:08:02 by norabino          #+#    #+#             */
/*   Updated: 2024/09/23 17:33:45 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// En cas de carte invalide vous afficherez sur la sortie d’erreur : 
//map error suivi d’un retour à la ligne puis il passera traitement
//du plateau suivant.

#include "ft.h"

int	ft_check_map(char	**map)
{
	if (ft_check_line_len(map)
		&& ft_check_map_atleast_onecase(map)
		&& ft_check_map_endline(map)
		&& ft_check_chars(map)
		&& ft_check_first_line(map)
		&& ft_check_printable_chars(map))
	{
		return (1);
	}
	else
	{
		write(2, "map error\n", 10);
		return (0);
	}
}
