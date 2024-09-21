/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 15:39:28 by jdupuis           #+#    #+#             */
/*   Updated: 2024/09/09 11:45:14 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int		i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
			return (0);
		i++;
	}
	return (1);
}
/*
int main(void)
{
	char *str = "COUCOULESAMIS";
//	char *str = "Coucou les amis";
//	char *str = "COUCOU LES AMIS";
//	char *str = "";

	printf("%d",ft_str_is_uppercase(str));
	return (0);
}
*/
