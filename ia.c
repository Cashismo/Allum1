/*
** ia.c for ia in /home/gassem_a/Allum1/CPE_2015_Allum1
**
** Made by aurelien gassemann
** Login   <gassem_a@epitech.net>
**
** Started on  Tue Feb 16 18:59:47 2016 aurelien gassemann
** Last update Sun Feb 21 19:18:58 2016 aurelien gassemann
*/

#include <stdlib.h>
#include "allum1.h"

int	ia(int line, int nb_matches, int *tab)
{
  t_var	var;

  var.i = 0;
  my_putstr("\n*********\n");
  tab[line] = tab[line] - 1;
  while (var.i != 4)
    {
      var.j = 0;
      my_putstr("*");
      var.k = 0;
      while (var.k++ != 3 - var.i)
	write(1, " ", 1);
      while (var.j < tab[var.i])
	{
	  my_putstr("|");
	  var.j = var.j + 1;
	}
      while (var.k++ + tab[var.i] != 8)
	write(1, " ", 1);
      my_putstr("*\n");
      var.i = var.i + 1;
    }
  my_putstr("*********\n");
  if (tab[0] == 0 && tab[1] == 0 && tab[2] == 0 && tab[3] == 0)
    {
      my_putstr("I lost.. snif.. but I'll get you next time!!\n");
      return (1);
    }
  return (0);
}

int	aff_ia(int *tab)
{
  int	line;
  int	nb_matches;
  int	r;

  srand(time(NULL));
  r = (rand()%1) + 1;
  my_putchar('\n');
  my_putstr("AI's turn...\n");
  my_putstr("AI removed ");
  nb_matches = r;
  my_put_nbr(1);
  my_putstr(" match(es) from line ");
  while (tab[line] == 0)
    line = rand() % 4;
  my_put_nbr(line + 1);
  return (ia(line, nb_matches, tab));
}
