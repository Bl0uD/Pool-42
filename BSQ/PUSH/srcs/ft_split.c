/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:44:01 by jdupuis           #+#    #+#             */
/*   Updated: 2024/09/23 19:52:05 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

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

int	ft_in_charset(char str, char *charset)
{
	int	j;

	j = 0;
	while (charset[j])
	{
		if (str == charset[j])
			return (1);
		j++;
	}
	return (0);
}

int	ft_count_word(char *str, char *charset)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (str[i])
	{
		j = 0;
		if (str[i + 1] == '\0')
			k++;
		while (charset[j])
		{
			if (str[i] == charset[j] && str[i - 1] != charset[j])
				k++;
			j++;
		}
		i++;
	}
	return (k);
}

char	**ft_split(char *str, char *charset)
{
	char	**res;
	int		c[3];

	c[0] = 0;
	c[2] = 0;
	if (!str)
		return (NULL);
	res = (char **)malloc(sizeof(char *) * (ft_count_word(str, charset) + 2));
	if (!res)
		return (NULL);
	while (c[2] < ft_count_word(str, charset) && str[c[0]])
	{
		while (ft_in_charset(str[c[0]], charset))
			c[0]++;
		c[1] = c[0];
		while (!(ft_in_charset(str[c[1]], charset)) && str[c[1]])
			c[1]++;
		if (str[c[0]])
		{
			res[c[2]] = ft_strndup(str + c[0], c[1] - c[0]);
			c[2]++;
			c[0] = c[1];
		}
	}
	return (res[c[2]] = 0, res);
}
