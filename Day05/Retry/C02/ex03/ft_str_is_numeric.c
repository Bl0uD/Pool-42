/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 17:50:41 by jdupuis           #+#    #+#             */
/*   Updated: 2024/09/09 11:46:02 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int		i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i])
	{
		if (str[i] <= '0' || str[i] >= '9')
			return (0);
		i++;
	}
	return (1);
}
/*
int main(void)
{
//	char	*str = "";
//	char	*str = "coucou les amis";
	char	*str = "1234";

	printf("%d",ft_str_is_numeric(str));
	return (0);
}
*/
