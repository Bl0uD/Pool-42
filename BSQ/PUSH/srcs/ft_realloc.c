/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 18:07:29 by jdupuis           #+#    #+#             */
/*   Updated: 2024/09/24 12:15:26 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_realloc(char *str, int size)
{
	char	*newstr;

	newstr = ft_strndup(str, size);
	free(str);
	if (!newstr)
	{
		free(newstr);
		write(1, "Error realloc\n", 14);
		return (0);
	}
	return (newstr);
}
