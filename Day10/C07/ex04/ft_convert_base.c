/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 21:42:04 by jdupuis           #+#    #+#             */
/*   Updated: 2024/09/19 19:27:50 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_atoi_base(char *str, char *base);

int	ft_check_base(char *base);

int	ft_strlen(char *c)
{
	int	i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}

char	*ft_alloc(long nbr, char *base, int signe, int *i)
{
	char	*a;

	if (nbr == 0)
		(*i)++;
	while (nbr >= 1)
	{
		nbr /= ft_strlen(base);
		(*i)++;
	}
	a = (char *)malloc(sizeof(char) * (*i) + signe + 2);
	if (signe == 1)
	{
		a[0] = '-';
		(*i)++;
	}
	a[(*i)] = '\0';
	return (a);
}

char	*ft_itoa_base(long nbr, char *base)
{
	int		i;
	int		j;
	int		signe;
	char	*res;

	i = 0;
	signe = 0;
	if (!ft_check_base(base))
		return (NULL);
	if (nbr < 0)
	{
		signe = 1;
		nbr *= -1;
	}
	res = ft_alloc(nbr, base, signe, &i);
	if (!res)
		return (0);
	j = 1;
	while (i > j - 1 + signe)
	{
		res[i - j] = base[(nbr % ft_strlen(base))];
		nbr = (nbr / ft_strlen(base));
		j++;
	}
	return (res);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long	t;

	if (ft_check_base(base_from) == 0 || ft_check_base(base_to) == 0)
		return (NULL);
	t = ft_atoi_base(nbr, base_from);
	nbr = ft_itoa_base(t, base_to);
	return (nbr);
}

int	main(int argc, char *argv[])
{
	char	*nbr;
	char	*base_from;
	char	*base_to;

	argc = 0;
	nbr = argv[1];
	base_from = argv[2];
	base_to = argv[3];
	printf("Nombre dans l'ancienne base : %s\n", nbr);
	nbr = ft_convert_base(nbr, base_from, base_to);
	printf("Nombre dans la nouvelle base : %s", nbr);
	free(nbr);
	return (0);
}

