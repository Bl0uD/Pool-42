/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 17:21:52 by jdupuis           #+#    #+#             */
/*   Updated: 2024/09/07 15:56:46 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	c;

	i = 0;
	while (i < size -1)
	{
		c = tab[i];
		tab[i] = tab[size -1];
		tab[size -1] = c;
		i++;
		size--;
	}
}
/*
int	main()
{
	int	tab[] = {1,2,3,4,5,6};
	int	size = 6;
	int	i;

	i = 0;
	ft_rev_int_tab(tab, size);
	while(i < size)
	{
		printf("%d,", tab[i]);
		i++;
	}
	return (0);
}
*/
