/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 16:37:56 by jdupuis           #+#    #+#             */
/*   Updated: 2024/09/18 18:54:10 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strlen(char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
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
	{
		if (str[i] == '\0')
			return ("");
		return (str);
	}
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			j++;
			if (j == ft_strlen(to_find))
				return (&str[i - j] + ft_strlen(to_find));
		}
		i++;
	}
	return (0);
}

int main(int argc, char *argv[])
{
	char	*str = argv[1];
	char	*to_find = argv[2];
	
	(void)argc;
	printf("%s\n", str);
	printf("%s\n", strstr(str, to_find));
	printf("%s", ft_strstr(str, to_find));
	return (0);
}

