/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 20:29:54 by jdupuis           #+#    #+#             */
/*   Updated: 2024/09/14 16:48:44 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	const char	hex[17] = "0123456789abcdef";
	int			i;

	i = 0;
	while (str[i])
	{
		if (str[i] > 0 && str[i] < 32)
		{
			write(1, "\\", 1);
			write(1, &hex[(unsigned char)str[i] / 16], 1);
			write(1, &hex[(unsigned char)str[i] % 16], 1);
			i++;
		}
		write (1, &str[i], 1);
		i++;
	}
}
/*
int	main(void)
{
	char *str = "Coucou \n tu vas bien ?";

	ft_putstr_non_printable(str);
	return (0);
}
*/
