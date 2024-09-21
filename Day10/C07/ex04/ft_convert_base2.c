/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 15:51:54 by jdupuis           #+#    #+#             */
/*   Updated: 2024/09/19 11:38:31 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *c);

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) == 0 || ft_strlen(base) == 1)
		return (0);
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j] || (base[j] <= 13 && base[j] >= 9)
				|| base[j] == '+' || base[j] == '-' || base[j] == ' ')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_in_base(char str, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (str == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int		i;
	long	res;
	int		sign;

	i = 0;
	res = 0;
	sign = 1;
	if (!ft_check_base(base))
		return (0);
	while ((str[i] <= 13 && str[i] >= 9) || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (ft_in_base(str[i], base) != -1)
	{
		res = res * ft_strlen(base) + ft_in_base(str[i], base);
		i++;
	}
	return (sign * res);
}
