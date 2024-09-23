/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_printable_chars.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 13:33:01 by norabino          #+#    #+#             */
/*   Updated: 2024/09/23 14:05:41 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Les caractères peuvent être n’importe quel caractère imprimable, même des
nombres.*/

int	ft_check_printable_chars(char **map)
{
	int	i;

	i = 0;
	while (map[0][i])
	{
		if ((map[0][1] < ' ') && (map[0][i] > '~'))
			return (-1);
		i ++;
	}
	return (1);
}
