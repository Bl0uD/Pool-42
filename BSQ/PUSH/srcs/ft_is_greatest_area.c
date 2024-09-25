/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_greatest_area.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 09:50:01 by jdupuis           #+#    #+#             */
/*   Updated: 2024/09/25 16:32:51 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int    ft_is_greatest_area(int greatest, int current)
{
	if (current > greatest)
		return (current);
	return (greatest);
}
