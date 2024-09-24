/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:33:07 by jdupuis           #+#    #+#             */
/*   Updated: 2024/09/24 16:28:58 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h> 

int		ft_strlen(char *str);
int		ft_check_line_len(char **map, int nb_lines);
int		ft_check_map_atleast_onecase(char **map, int nb_lines);
int		ft_check_map_endline(char **map, int nb_lines);
int		ft_check_chars(char **map, int nb_lines);
int		ft_check_first_line(char **map, int nb_lines);
int		ft_check_map(char **map, int nb_lines);
int		ft_check_printable_chars(char **map, int nb_lines);
int		ft_in_charset(char str, char *charset);
int		ft_atoi(char *str, int n);
char	*ft_strndup(char *str, int n);
char	**ft_split(char *str, char sep);
char	*ft_realloc(char *str, int size);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strndup(char *str, int n);
void	*ft_calloc(unsigned long count, unsigned long size);
void	ft_support(void *b, unsigned long n);

#endif
