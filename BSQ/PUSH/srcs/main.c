/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:41:32 by jdupuis           #+#    #+#             */
/*   Updated: 2024/09/23 19:49:11 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdlib.h>

char	*ft_read_file(char *file,char *map)
{
	int	fd;
	int	bytes_read;

	fd = open(map, O_RDONLY);
	if (fd == -1)
	{
		write(1, "Erreur d'ouverture du fichier\n", 30);
		return (NULL);
	}
	bytes_read = read(fd, file, sizeof(file) - 1);
	if (bytes_read == -1)
	{
		write(1, "Erreur de lecture du fichier\n", 29);
		close(fd);
		return (NULL);
	}
	file[bytes_read] = '\0';
	close(fd);
	return (file);
}

char	*ft_read_number(char *first_char, char *map)
{
	int	fd;
	int	bytes_read;

	fd = open(map, O_RDONLY);
	if (fd == -1)
	{
        write(1, "Erreur d'ouverture du fichier\n", 30);
		return (NULL);
	}
	bytes_read = read(fd, first_char, sizeof(first_char) - 1);
	if (bytes_read == -1)
	{
		write(1, "Erreur de lecture du fichier\n", 29);
		close(fd);
		return (NULL);
	}
	first_char[bytes_read] = '\0';
	close(fd);
	return (first_char);
}

int	main(int ac, char **av)
{
	int		nb_lines;
	int		l;
	int	i;
	char	first_char[10];
	char	*file;
	char	**temp;
	char	**map;

	(void)ac;
	ft_read_number(first_char, av[1]);
	nb_lines = ft_atoi(first_char, ft_strlen((first_char) - 3));
	map = (char **)malloc((nb_lines + 1) * sizeof(char *));
	if (map == NULL)
	{
		write(1, "Erreur d'allocation de map\n", 27);
		return (1);
	}
	file = (char *)malloc(9999999 * sizeof(char));
	if (file == NULL)
	{
		write(1, "Erreur d'allocation de file\n", 29);
		free(map);
		return (1);
	}
	if (ft_read_file(file, av[1]) == NULL)
	{
		free(map);
		free(file);
		return (1);
	}
	temp = ft_split(file, '\n');
	if (temp == NULL)
	{
		write(1, "Erreur dans ft_split\n", 21);
		free(map);
		free(file);
		return (1);
	}
	l = 0;
	while (temp[l])
	{
		map[l] = (char *)malloc((ft_strlen(temp[l]) + 1) * sizeof(char));
		if (map[l] == NULL)
		{
			write(1, "Erreur d'allocation pour une ligne de map\n", 42);
			while (--l >= 0)
				free(map[l]);
			free(map);
			free(file);
			return (1);
		}
		ft_strcpy(map[l], temp[l]);
		printf("%s\n",map[l]);
		l++;
	}
	map[l] = NULL;
//	printf("%d", ft_check_map(map));
	i = 0;
	while (temp[i])
	{
		free(temp[i]);
		i++;
	}	
	while (l >= 0)
	{
		free(map[l]);
		l--;
	}
	free(temp);
	free(map);
	free(file);
	return (0);
}
