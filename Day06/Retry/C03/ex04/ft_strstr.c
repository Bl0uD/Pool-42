/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 16:37:56 by jdupuis           #+#    #+#             */
/*   Updated: 2024/09/10 17:13:36 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *c)
{
	int	i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		while (str[i+j] == to_find[j])
			j++;
		if (j == ft_strlen(to_find))
			return (&str[i - j] + ft_strlen(to_find));
		else
			j = 0;
		i++;
	}
	return (str);
}
/*
int main(void)
{
	char	*str = "Coucou les amis, comment allez-vous ?";
	char	*to_find = "amis";

	printf("%s\n", str);
	printf("%s", ft_strstr(str, to_find));
	return (0);
}
*/
