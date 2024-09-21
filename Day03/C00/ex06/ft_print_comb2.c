/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 16:36:03 by jdupuis           #+#    #+#             */
/*   Updated: 2024/09/04 19:09:35 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_printf(char c)
{
	write(1, &c, 1);
}

void	ft_affichage(int n1, int n2)
{
	ft_printf((n1 / 10) + '0');
	ft_printf((n1 % 10) + '0');
	ft_printf(' ');
	ft_printf((n2 / 10) + '0');
	ft_printf((n2 % 10) + '0');
}

void	ft_print_comb2(void)
{
	int	n1;
	int	n2;

	n1 = 0;
	while (n1 <= 98)
	{
		n2 = n1 +1;
		while (n2 <= 99)
		{
			ft_affichage(n1, n2);
			if (n1 != 98 || n2 != 99)
			{
				ft_printf(',');
				ft_printf(' ');
			}
			n2++;
		}
		n1++;
	}
}
/*
int	main(void)
{
	return (ft_print_comb2(), 0);
}
*/
