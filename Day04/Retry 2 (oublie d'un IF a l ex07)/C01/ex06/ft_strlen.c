/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 17:05:55 by jdupuis           #+#    #+#             */
/*   Updated: 2024/09/05 18:19:59 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0' )
		i++;
	return (i);
}
/*
int	main(void)
{
	char *str = "coucou les amis";

	ft_strlen(str);
	printf("%d", ft_strlen(str));
	return (0);
}*/
