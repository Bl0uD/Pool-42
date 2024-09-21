/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 14:33:28 by jdupuis           #+#    #+#             */
/*   Updated: 2024/09/05 09:18:29 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printf(char c3, char c2, char c1)
{
	write (1, &c1, 1);
	write (1, &c2, 1);
	write (1, &c3, 1);
}

void	ft_print_comb(void)
{
	int	c1;
	int	c2;
	int	c3;

	c1 = '0';
	while (c1 <= '7')
	{
		c2 = c1 + 1;
		while (c2 <= '8')
		{
			c3 = c2 + 1;
			while (c3 <= '9')
			{
				ft_printf(c3, c2, c1);
				if (c1 != '7' || c2 != '8' || c3 != '9')
					write(1, ", ", 2);
				c3++;
			}
			c2++;
		}
		c1++;
	}
}
/*
int	main(void)
{
	return (ft_print_comb(), 0);
}
*/
