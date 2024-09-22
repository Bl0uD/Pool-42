#include <unistd.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

// Toutes les lignes doivent avoir la même longueur.
int ft_check_map_len(char **map)
{
    int i;
    int line_size;

    line_size = ft_strlen(map[1]);
    i = 2;
    while (map[i])
    {
        if (ft_strlen(map[i]) != line_size)
            return (-1);
        i ++;
    }
    return (1);
}

// Il y a au moins une ligne d’au moins une case.
int ft_check_map_atleast_onecase(char **map)
{
    char    empty;
    char    obstacle;
    int i;
    int j;

    empty = map[0][1];
    obstacle = map[0][2];
    i = 1;
    while (map[i])
    {
        while (map[i][j])
        {
            j = 0;
            while (map[i][j] == obstacle && map[i][j])
                j++;
            if (map[i][j] == empty)
                i++;
            else
                return (-1);
        }
    }
    return (1);
}

// À la fin de chaque ligne il y a un retour à la ligne.
int ft_check_map_endline(char **map)
{
    int i;
    int line_size;

    line_size = ft_strlen(map[1]);
    i = 1;
    while (map[i])
    {
        if (map[i][line_size + 1] != '\n')
            return (-1);
        i++;
    }
    return (1);
}

// Les caractères présent dans la carte doivent être uniquement ceux présenté à la première ligne.
int ft_check_chars(char **map)
{
    char    empty;
    char    obstacle;
    char    full;
    int     i;
    int     j;

    empty = map[0][1];
    obstacle = map[0][2];
    full = map[0][3];
    i = 1;
    while (map[i])
    {
        j = 0;
        while (map[i][j])
        {
            if ((map[i][j] != empty)
                && (map[i][j] != obstacle)
                && (map[i][j] != full))
            {    
                return (-1);
            }
            j++;

        }
        i++;
    }
    return (1);
}

// En cas de carte invalide vous afficherez sur la sortie d’erreur : map error suivi d’un retour à la ligne puis il passera traitement du plateau suivant.
int ft_check_map(char   **map)
{
    if (ft_check_map_len(map)
        && ft_check_map_atleast_onecase(map)
        && ft_check_map_endline(map)
        && ft_check_chars(map))
    {
        return (1);
    }
    else
    {
        write(1, "map error\n", 10);
        return (-1);
    }
}

// Générateur de plateaux perl
/*#!/usr/bin/perl

use warnings;
use strict;

die "program x y density" unless (scalar(@ARGV) == 3);

my ($x, $y, $density) = @ARGV;

print "$y.ox\n";
for (my $i = 0; $i < $y; $i++) {
    for (my $j = 0; $j < $x; $j++) {
        if (int(rand($y) * 2) < $density) {
            print "o";
        }
        else {
            print ".";
        }
    }
    print "\n";
}*/

#include <stdio.h>
int main(void)
{
    char    **map;
    map[0] = "4.ox\n";
    map[1] = "...\n";
    map[2] = "o.o\n";
    map[3] = ".o.\n";
    printf("%d", ft_check_map(map));
    return (0);
}