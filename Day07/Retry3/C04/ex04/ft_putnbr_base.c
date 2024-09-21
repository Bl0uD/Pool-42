/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:49:50 by jdupuis           #+#    #+#             */
/*   Updated: 2024/09/19 17:34:38 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *c)
{
	int	i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) <= 1)
		return (0);
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j] || (base[j] <= 13 && base[j] >= 9)
				|| base[j] == '+' || base[j] == '-')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	char	res;

	if (!ft_check_base(base))
		return ;
	res = 0;
	if (nbr == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nbr < 0)
	{
		nbr *= -1;
		write (1, "-", 1);
	}
	if (nbr > ft_strlen(base) - 1)
		ft_putnbr_base(nbr / ft_strlen(base), base);
	write(1, &base[nbr % ft_strlen(base)], 1);
}
/*
int	main(void)
{
	int	nbr;
	char	*base;

	nbr = 12;
	base = "01";

	ft_putnbr_base(nbr, base);
	return (0);
}
*/
