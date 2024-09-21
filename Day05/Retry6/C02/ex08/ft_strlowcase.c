/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 14:34:04 by jdupuis           #+#    #+#             */
/*   Updated: 2024/09/13 11:52:55 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'A' && str[i] <= 'Z'))
			str[i] = str[i] + 32;
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
int	main(void)
{
	char str[2000] = "CouCOuLesAmis";
//	char *str = "coucoulesamis";
//	char str[2000] = "Coucou les amis";
//	char *str = "Coucoules2Amis";
//	char *str = "";

	printf("%s",ft_strlowcase(str));
	return (0);
}
*/
