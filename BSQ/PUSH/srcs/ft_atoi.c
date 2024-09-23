/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 15:01:38 by norabino          #+#    #+#             */
/*   Updated: 2024/09/23 18:22:39 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_str_is_numeric(char str)
{
	if (!((str >= '0') && (str <= '9')))
	{
		return (0);
	}
	return (1);
}

int	ft_atoi(char *str, int n)
{
	int	res;
	int	i;

	i = 0;
	res = 0;
	while (ft_str_is_numeric(str[i]) && i < n)
	{
		res = res * 10 + str[i] - 48;
		i++;
	}
	return (res);
}
