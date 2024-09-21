/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 09:35:40 by jdupuis           #+#    #+#             */
/*   Updated: 2024/09/09 12:09:05 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (src[0] == '\0')
		return (0);
	else if (src[1] == '\0')
	{
		dest[0] = src[0];
		return (1);
	}
	while (src[i] && i < (size))
	{
		dest[i] = src[i];
		i++;
	}
	return (i);
}
/*
int	main(void)
{
	char	dest[200];
	char	*src = "Coucou les amis";
//	char	*src = "A";
//	char	*src = "";
	unsigned int size = 20;

	printf("%d",(ft_strlcpy(dest, src, size)));
	return (0);
}
*/
