/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 16:14:55 by jdupuis           #+#    #+#             */
/*   Updated: 2024/09/09 12:07:01 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	ft_str_is_strupcase(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z'))
			str[i] = str[i] - 32;
		write (1, &str[i], 1);
		i++;
	}
	return (*str);
}
/*
int	main(void)
{
//	char str[2000] = "CouCOuLesAmis";
//	char *str = "coucoulesamis";
	char str[2000] = "Coucou les amis";
//	char *str = "Coucoules2Amis";
//	char *str = "";

	ft_str_is_strupcase(str);
	return (0);
}
*/
