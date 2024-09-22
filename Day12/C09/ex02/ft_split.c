/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 10:40:55 by jdupuis           #+#    #+#             */
/*   Updated: 2024/09/19 15:08:03 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *c)
{
	int	i;

	i = 0;
	while (c[i])
		i++;
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
/*
int	main(int argc, char *argv[])
{
	int	i;
	char	*str;
	char	*charset;
	char	**res;

	i = 0;
	argc = 0;
	str = argv[1];
	charset = argv[2];
	res = ft_split(str, charset);
	if (res == NULL)
		return (42);
	while (res[i])
	{
		printf("%s\n", res[i]);
		i++;
	}
	while (i >= 0)
	{
		free(res[i]);
		i--;
	}
	free(res);
	return (0);
}
*/
