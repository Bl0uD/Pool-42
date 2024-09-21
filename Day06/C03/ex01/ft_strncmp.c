/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 10:29:12 by jdupuis           #+#    #+#             */
/*   Updated: 2024/09/09 16:34:28 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	if (s1[i] == '\0' && s2[i] != '\0')
		return (-1);
	else if (s1[i] != '\0' && s2[i] == '\0')
		return (1);
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/*
int main(void)
{
	unsigned int	n = 15;
//	char	*s1 = "";
	char	*s1 = "Coucou les qmis";
//	char	*s2 = "";
	char	*s2 = "Coucou les amis";

	printf("%d", ft_strncmp(s1, s2, n));
	return (0);
}*/
