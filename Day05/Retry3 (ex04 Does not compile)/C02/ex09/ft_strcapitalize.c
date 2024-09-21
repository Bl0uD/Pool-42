/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 16:36:35 by jdupuis           #+#    #+#             */
/*   Updated: 2024/09/08 21:34:24 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_numeric(char str)
{
	if (str < '0' || str > '9')
		return (0);
	return (1);
}

int	ft_str_is_alpha(char str)
{
	if ((str < 'a' || str > 'z') && (str < 'A' || str > 'Z'))
		return (0);
	return (1);
}

int	ft_str_is_lowercase(char str)
{
	if (str < 'a' || str > 'z')
		return (0);
	return (1);
}

int	ft_alpha_num(char str)
{
	if (ft_str_is_alpha(str) || ft_str_is_numeric(str))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_str_is_lowercase(str[i]) && (i == 0 || !ft_alpha_num(str[i -1])))
			str[i] -= 32;
		else if (ft_alpha_num(str[i -1]) && (str[i] >= 'A' && str[i] <= 'Z'))
			str[i] += 32;
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[2000] = "salut, coMMent tu vas ? 42mots quarante-deux;

	printf("%s\n", str);
	printf("%s", ft_strcapitalize(str));
	return (0);
}*/
