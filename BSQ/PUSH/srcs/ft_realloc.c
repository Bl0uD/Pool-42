/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 18:07:29 by jdupuis           #+#    #+#             */
/*   Updated: 2024/09/23 18:28:04 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_realloc(void *str, int new, int old)
{
	char	*newstr;
	int		i;

	i = 0;
	newstr = ft_calloc(new, sizeof(char));
	while (i < old)
	{
		newstr[i] = ((char *)str)[i];
		i++;
	}
	free(str);
}
