/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:41:32 by jdupuis           #+#    #+#             */
/*   Updated: 2024/09/25 18:45:05 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdlib.h>

char	*ft_read_number(char *file, char *map, int *sw)
{
	int	fd;

	fd = open(map, O_RDONLY);
	if (fd == -1)
	{
		write(1, "Erreur d'ouverture du fichier\n", 30);
		close(fd);
		return (NULL);
	}
	*sw = read(fd, file, 1024*1024*128);
	if (*sw == -1)
	{
		write(1, "Erreur de lecture du nb fichier\n", 32);
		close(fd);
		return (NULL);
	}
	file[*sw] = '\0';
	close(fd);
	return (file);
}

int	main(int ac, char **av)
{
	int		tab_int[3];
	char	*file;
	char	*first_char;
	char	**map;

	(void)ac;
	file = malloc(sizeof(char) * 1024*1024*128);
	if (!(ft_read_number(file, av[1], &tab_int[2])))
		return 0;
	map = ft_split(file, '\n');
	first_char = map[0];
	tab_int[2] = ft_strlen(first_char);
	tab_int[0] = ft_atoi(first_char, tab_int[2] - 3);
	printf("nb lignes : %d\n", tab_int[0]);
	if (!ft_check_map(map, tab_int[0]))
	{
		write(1, "map error\n", 10);
		return (0);
	}
	else
		write(1, "map OK\n", 7);
	ft_bsq(map, tab_int[0]);
	while (tab_int[0] >= 0)
	{
		//free(map[tab_int[0]]);
		tab_int[0]--;
	}
	//free(file);
	return (0);
}
/*----------------------
		LEGENDE : 
tab_int[0] = nb_lines;
tab_int[1] = line;
tab_int[2] = size_line;

		UTILS :

tab_int[1] = 0;
while (tab_int[1] <= tab_int[0] - 1)
{
	tab_int[1]++;
	printf("MAP [%d] : %s", tab_int[1], map[tab_int[1]]);
}

printf("first char : %s", first_char);
-----------------------*/
