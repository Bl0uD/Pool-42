/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 10:15:40 by jdupuis           #+#    #+#             */
/*   Updated: 2024/09/08 16:40:20 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *c)
{
	int	res;
	int	i;
	int	sign;

	sign = 1;
	res = 0;
	i = 0;
	if (c[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (c[i])
	{
		res = res * 10 + c[i] - '0';
		i++;
	}
	return (res * sign);
}

int	rush(int x, int y);

int	main(int argc, char **argv)
{
	if (argc > 2)
	{
		if (ft_atoi(argv[1]) >= 0 && ft_atoi(argv[2]) >= 0)
			rush(ft_atoi(argv[1]), ft_atoi(argv[2]));
		else
			write(1, "error", 5);
	}
	return (0);
}
