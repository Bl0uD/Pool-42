/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 17:22:46 by jdupuis           #+#    #+#             */
/*   Updated: 2024/09/09 12:09:45 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int		i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i])
	{
		if ((str[i] < 'a' || str[i] > 'z'))
			if ((str[i] < 'A' || str[i] > 'Z'))
				return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char *str = "CouCOuLesAmis";
//	char *str = "coucoulesamis";
//	char *str = "Coucou les amis";
//	char *str = "Coucoules2Amis";
//	char *str = "";

	printf("%d", ft_str_is_alpha(str));
	return (0);
}
*/
