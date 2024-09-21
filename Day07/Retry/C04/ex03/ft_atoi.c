/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 21:43:14 by jdupuis           #+#    #+#             */
/*   Updated: 2024/09/11 17:35:18 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isspace(char str)
{
	if (str == '\f' || str == '\n' || str == '\r'
		|| str == '\t' || str == '\v' || str == ' ')
		return (1);
	return (0);
}

int	ft_is_numeric(char str)
{
	if (str >= '0' && str <= '9')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	res;
	int	sign;

	i = 0;
	res = 0;
	sign = 1;
	while (ft_isspace(str[i]))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (ft_is_numeric(str[i]))
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (sign * res);
}
/*
int	main(void)
{
	char	*str = " ---+--+1234-ab567";
	printf("%d", ft_atoi(str));
	return (0);
}
*/
