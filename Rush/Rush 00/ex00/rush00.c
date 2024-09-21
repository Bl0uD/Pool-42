/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 10:17:08 by jdupuis           #+#    #+#             */
/*   Updated: 2024/09/07 15:22:49 by jdupuis          ###   ########.fr       */
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
			if ((c == 1 || c == y) && (l == 1 || l == x))
				ft_putchar('o');
			else if ((c != 1 || c != y) && (l == 1 || l == x))
				ft_putchar('|');
			else if ((c == 1 || c == y) && (l != 1 || l != x))
				ft_putchar('-');
			else
				ft_putchar(' ');
			l++;
		}
		ft_putchar('\n');
		c++;
	}
}
