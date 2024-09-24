/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 11:27:41 by jdupuis           #+#    #+#             */
/*   Updated: 2024/09/24 15:31:02 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_strndup(char *str, int n)
{
	int		i;
	char	*res;

	i = 0;
	res = (char *)malloc(sizeof(char) * ft_strlen(str) + 2);
	while (str[i] && i <= n)
	{
		res[i] = str[i];
		i++;
	}
	res[i - 1] = '\n';
	res[i] = '\0';
	return (res);
}
