/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 09:08:02 by norabino          #+#    #+#             */
/*   Updated: 2024/09/24 17:38:11 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// En cas de carte invalide vous afficherez sur la sortie d’erreur : 
//map error suivi d’un retour à la ligne puis il passera traitement
//du plateau suivant.

#include "ft.h"

int	ft_check_map(char **map, int nb_lines)
{
	if (ft_check_line_len(map, nb_lines)
		&& ft_check_map_atleast_onecase(map, nb_lines)
		&& ft_check_map_endline(map, nb_lines)
		&& ft_check_chars(map, nb_lines)
		&& ft_check_first_line(map, nb_lines)
		&& ft_check_printable_chars(map, nb_lines))
		return (1);
	return (0);
}
