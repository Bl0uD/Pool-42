/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 17:51:57 by jdupuis           #+#    #+#             */
/*   Updated: 2024/09/10 11:59:41 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>

unsigned int	ft_strlen(char *c)
{
	int	i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_len;

	i = 0;
	dest_len = ft_strlen(dest);
	if (size <= ft_strlen(dest))
		return (ft_strlen(src) + size);
	while (src[i] && dest_len + i < size - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + ft_strlen(src));
}
/*
int	main(void)
{
	char	dest1[200] = "ABCDEFG";
	char	dest2[200] = "ABCDEFG";
	char	*src = "ABCDEFGHIJKL";

	printf("%d ", ft_strlcat(dest1, src, 10));
	printf("%s\n", dest1);
	
	printf("%zu ", strlcat(dest2, src, 10));
	printf("%s\n", dest2);
	return (0);
}
*/
