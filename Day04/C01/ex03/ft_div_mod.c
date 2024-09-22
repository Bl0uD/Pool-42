/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 13:38:27 by jdupuis           #+#    #+#             */
/*   Updated: 2024/09/05 18:16:30 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = (a / b);
	*mod = (a % b);
}
/*
int	main(void)
{
	int	a = 5;
	int	b = 2;
	int	div;
	int	mod;

	ft_div_mod(a, b, &div, &mod);
	printf("%d %d", div, mod);
	return (0);
}
*/
