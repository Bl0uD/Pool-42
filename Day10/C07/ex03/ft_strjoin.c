/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 18:39:00 by jdupuis           #+#    #+#             */
/*   Updated: 2024/09/19 15:23:34 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *c)
{
	int	i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}

int	ft_len(char **strs, char *sep, int size)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (j < size)
	{
		i = ft_strlen(strs[j]) + i;
		j++;
	}
	while (sep[k])
		k++;
	return ((k * (size - 1)) + i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	dest_len;

	i = 0;
	dest_len = ft_strlen(dest);
	while (src[i])
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		j;
	char	*res;

	if (size == 0)
	{
		res = malloc(sizeof(char) * 1);
		res[0] = 0;
		return (res);
	}
	res = malloc(sizeof(char) * ft_len(strs, sep, size) + 1);
	res[0] = 0;
	j = 0;
	while (j < size)
	{
		ft_strcat(res, strs[j]);
		if (j < size - 1)
			ft_strcat(res, sep);
		j++;
	}
	return (res);
}
/*
int	main(void)
{
	int		size;
	char	*strs[4];
	char	*sep = "\\.\\";
//	int	i = 0;
//	int j = 0;

	size = 4;
	strs[0] = "Bonjour";
	strs[1] = "Comment";
	strs[2] = "ca";
	strs[3] = "va";

	while (j < size)
	{
		i = i + ft_strlen(strs[j]);
		j++;
	}
	
//	i = ft_len(strs,sep,size);
//	printf("%d\n", i);
	printf("%s", ft_strjoin(size, strs, sep));
	
	return (0);
}
*/
