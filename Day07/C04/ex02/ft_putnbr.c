/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 20:32:10 by jdupuis           #+#    #+#             */
/*   Updated: 2024/09/11 18:09:41 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int nb)
{
	char	res;

	res = 0;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		nb *= -1;
		write (1, "-", 1);
	}
	res = (nb % 10) + '0';
	if (nb > 9)
		ft_putnbr(nb / 10);
	write(1, &res, 1);
}
/*
int	main(void)
{
	int	nb;

	nb = 1221;
	ft_putnbr(nb);
	return (0);
}
*/
