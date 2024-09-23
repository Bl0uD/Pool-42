/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:33:07 by jdupuis           #+#    #+#             */
/*   Updated: 2024/09/23 18:25:07 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h> 

int		ft_strlen(char *str);
int		ft_check_line_len(char **map);
int		ft_check_map_atleast_onecase(char **map);
int		ft_check_map_endline(char **map);
int		ft_check_chars(char **map);
int		ft_check_first_line(char **map);
int		ft_check_map(char **map);
int		ft_check_printable_chars(char **map);
char	*ft_strndup(char *str, int n);
int		ft_in_charset(char str, char *charset);
int		ft_atoi(char *str, int n);
char	**ft_split(char *str, char *charset);
void	ft_support(void *b, unsigned long n);
void	*ft_calloc(unsigned long count, unsigned long size);
void	ft_realloc(void *str, int new, int old);
char	*ft_strcpy(char *dest, char *src);

#endif
