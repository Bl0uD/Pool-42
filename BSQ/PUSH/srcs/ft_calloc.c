/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 18:03:59 by jdupuis           #+#    #+#             */
/*   Updated: 2024/09/23 18:25:50 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	*ft_calloc(unsigned long count, unsigned long size)
{
	void	*ptr;

	ptr = (void *)malloc(count * size);
	if(!ptr)
		return (0);
	ft_support(ptr, count);
	return (ptr);
}
