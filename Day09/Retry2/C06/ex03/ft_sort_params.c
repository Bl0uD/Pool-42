/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 00:18:38 by jdupuis           #+#    #+#             */
/*   Updated: 2024/09/12 20:24:01 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(char **index1, char **index2)
{
	char	*temp;

	temp = *index1;
	*index1 = *index2;
	*index2 = temp;
}

int	ft_strcmp(char *c1, char *c2)
{
	int	i;

	i = 0;
	while (c1[i] == c2[i])
		i++;
	return (c1[i] - c2[i]);
}

void	ft_putstr(char *argv)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		write(1, &argv[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 1;
	while (i < argc -1)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				ft_swap(&argv[i], &argv[j]);
				i = 1;
			}
			j++;
		}
		i++;
	}
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		i++;
	}
	return (0);
}
