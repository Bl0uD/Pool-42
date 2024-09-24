/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:44:01 by jdupuis           #+#    #+#             */
/*   Updated: 2024/09/24 17:34:01 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char **ft_while(char *str,char sep, char **result)
{
	int		i;
	int		j;
	int		start;

	i = 0;
	j = 0;
	start = 0;
	while (str[i])
	{
		if (str[i] == sep)
		{
			result[j] = ft_strndup(str + start, i - start);
			j++;
			start = i + 1;
		}
		i++;
	}
	result[j] = ft_strndup(str + start, i - start);
	result[j + 1] = NULL;
	return (result);
}

char	**ft_split(char *str, char sep)
{
	char    **result;
	int		i;
	int		count;

	count = 1;
	i = 0;
	while (str[i])
	{
		if (str[i] == sep && str[i + 1])
			count++;
		i++;
	}
	result = (char **)malloc((count + 1) * sizeof(char *));
	if (!result)
	    return NULL;
	return (ft_while(str, sep, result));
}
