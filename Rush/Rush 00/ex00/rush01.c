/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 10:17:08 by jdupuis           #+#    #+#             */
/*   Updated: 2024/09/08 17:53:25 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_xy1(int x, int y, int c, int l)
{
	if ((c == 1 && l == 1) || ((c == y && l == x) && (c == (y != 1) && l == x)))
		ft_putchar('/');
	else if ((c == 1 && l == x) || (c == y && l == 1))
		ft_putchar('\\');
	else if ((c != 1 || c != y) && (l == 1 || l == x))
		ft_putchar('*');
	else if ((c == 1 || c == y) && (l != 1 || l != x))
		ft_putchar('*');
	else
		ft_putchar(' ');
}

void	ft_xy(int x, int y, int c, int l)
{
	if ((c == 1 && l == 1) || ((c == y && l == x)))
		ft_putchar('/');
	else if ((c == 1 && l == x) || (c == y && l == 1))
		ft_putchar('\\');
	else if ((c != 1 || c != y) && (l == 1 || l == x))
		ft_putchar('*');
	else if ((c == 1 || c == y) && (l != 1 || l != x))
		ft_putchar('*');
	else
		ft_putchar(' ');
}

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
			if (x == 1 || y == 1)
				ft_xy1(x, y, c, l);
			else
				ft_xy(x, y, c, l);
			l++;
		}
		ft_putchar('\n');
		c++;
	}
}
