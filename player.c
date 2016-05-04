/*
** player.c for player in /home/gassem_a/Allum1/CPE_2015_Allum1
**
** Made by aurelien gassemann
** Login   <gassem_a@epitech.net>
**
** Started on  Fri Feb 12 18:53:48 2016 aurelien gassemann
** Last update Sun Feb 21 19:16:35 2016 aurelien gassemann
*/

#include "allum1.h"

int	player(int line, int nb_matches, int *tab)
{
  int	i;
  int	j;
  int	k;

  i = 0;
  my_putchar('\n');
  my_putstr("*********\n");
  tab[line - 1] = tab[line - 1] - nb_matches;
  while (i != 4)
    {
      j = 0;
      my_putstr("*");
      k = 0;
      while (k++ != 3 - i)
	write(1, " ", 1);
      while (j < tab[i])
	{
	  my_putstr("|");
	  j = j + 1;
	}
      while (k++ + tab[i] != 8)
	write(1, " ", 1);
      my_putstr("*\n");
      i = i + 1;
    }
  my_putstr("*********\n");
  if (tab[0] == 0 && tab[1] == 0 && tab[2] == 0 && tab[3] == 0)
    {
      my_putstr("You lost, too bad..\n");
      return (1);
    }
  return (aff_ia(tab));
  return (0);
}
