/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 14:30:04 by jdupuis           #+#    #+#             */
/*   Updated: 2024/09/10 18:58:31 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z'))
			str[i] = str[i] - 32;
		i++;
	}
	str[i] = '\0';
	return (str);
}

int	main(void)
{
	char str[2000] = "CouCOuLesAmis";
//	char *str = "coucoulesamis";
//	char str[2000] = "Coucou les amis";
//	char *str = "Coucoules2Amis";
//	char *str = "";

	printf("%s", ft_strupcase(str));
	return (0);
}

