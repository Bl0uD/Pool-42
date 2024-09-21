/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 18:34:57 by jdupuis           #+#    #+#             */
/*   Updated: 2024/09/09 11:43:42 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int		i;
	char	res;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] <= 'a' || str[i] >= 'z')
			return (0);
		i++;
	}
	return (1);
}
/*
int main(void)
{
	char *str = "coucoulesamis";
//	char *str = "coucou les amis";
//	char *str = "coucou les 2 amis";
//	char *str = "";

	printf("%d",ft_str_is_lowercase(str));
	return (0);
}
*/
