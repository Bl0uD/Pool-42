/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 17:17:37 by jdupuis           #+#    #+#             */
/*   Updated: 2024/09/23 11:26:49 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdio.h>

int	main(void)
{
	char	c = 'C';
	int		a = 3;
	int		b = 2;
	char	*str = " Bonjour les amis";
	char	*s1 = " coucou";
	char	*s2 = " coucou";

	ft_putchar(c);
	ft_swap(&a, &b);
	ft_putstr(str);
	ft_strlen(str);
	ft_strcmp(s1, s2);

	printf(" Lenth of str : %d\n", ft_strlen(str));
	printf(" Result of compare :  %d\n",ft_strcmp(s1, s2));
	printf(" A = %d\n", a);
	printf(" B = %d\n", b);
	
	return (0);
}
