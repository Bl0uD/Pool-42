/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 17:09:59 by jdupuis           #+#    #+#             */
/*   Updated: 2024/09/19 19:07:59 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *c)
{
	int	i;

	i = 0;
	while (c[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strndup(char *str, int n)
{
	int		i;
	char	*res;

	i = 0;
	res = (char *)malloc(sizeof(char) * ft_strlen(str) + 1);
	while (str[i] && i < n)
	{
		res[i] = str[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
/*
int	main(void)
{
	char	*src = "Coucou les amis";

	printf("%s",ft_strdup(src));
	return (0);
}
*/
