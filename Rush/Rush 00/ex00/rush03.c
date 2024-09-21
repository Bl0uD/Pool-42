/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 10:17:08 by jdupuis           #+#    #+#             */
/*   Updated: 2024/09/07 15:25:29 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	c;
	int	l;

	c = 1;
	while (c <= y)
	{
		l = 1;
		while (l <= x)
		{
			if ((c == 1 && l == 1) || (c == y && l == 1))
				ft_putchar('A');
			else if ((c == 1 && l == x) || (c == y && l == x))
				ft_putchar('C');
			else if ((c != 1 || c != y) && (l == 1 || l == x))
				ft_putchar('B');
			else if ((c == 1 || c == y) && (l != 1 || l != x))
				ft_putchar('B');
			else
				ft_putchar(' ');
			l++;
		}
		ft_putchar('\n');
		c++;
	}
}
