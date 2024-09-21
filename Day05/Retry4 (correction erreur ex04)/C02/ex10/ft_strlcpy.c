/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 09:35:40 by jdupuis           #+#    #+#             */
/*   Updated: 2024/09/09 17:44:10 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlen(char *c)
{
	unsigned int	i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(src));
}
/*
int	main(void)
{
	char	dest[200];
	char	*src = "Coucou les amis";
//	char	*src = "A";
//	char	*src = "";

	printf("%d",(ft_strlcpy(dest, src, sizeof(dest))));
	return (0);
}
*/
