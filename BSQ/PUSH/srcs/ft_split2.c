/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:44:01 by jdupuis           #+#    #+#             */
/*   Updated: 2024/09/23 20:07:23 by jdupuis          ###   ########.fr       */
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

int	ft_count_word(char *str, char sep)
{
	int	i;
	int	kount;

	i = 0;
	kount = 0;
	while (str[i] != '\0')
	{
		if (str[i] == sep && str[i - 1] != sep)
			kount++;
		i++;
	}
	if (str[i] == '\0')
		kount++;
	return (kount);
}

char	**ft_split(char *str, char sep)
{
	char **tab;
	int i = 0;
	int j = 0;

	tab = malloc(sizeof(char *) * (ft_count_word(str, sep) + 1));
	while(str[i] != '\0')	
	{
		if (str[i] != sep)
			i++;
	}
	
}
