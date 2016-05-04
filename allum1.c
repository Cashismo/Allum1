/*
** allum1.c for allum1 in /home/gassem_a/Allum1/CPE_2015_Allum1
**
** Made by aurelien gassemann
** Login   <gassem_a@epitech.net>
**
** Started on  Sat Feb 20 12:56:25 2016 aurelien gassemann
** Last update Sun Feb 21 22:59:13 2016 aurelien gassemann
*/

#include <stdlib.h>
#include "allum1.h"

void	aff_tab()
{
  my_putstr("*********\n");
  my_putstr("*   |   *\n");
  my_putstr("*  |||  *\n");
  my_putstr("* ||||| *\n");
  my_putstr("*|||||||*\n");
  my_putstr("*********\n");
}

int	display_aff_status(int *tab)
{
  char	*line;
  char	*str;
  char	*nb_matches;

  if ((line = get_next_line(0)) == NULL)
    return (0);
  if ((errors_about_lines(my_atoi(line), tab, line)) == -1)
    return (display_aff_status(tab));
  my_putstr("Matches: ");
  if ((nb_matches = get_next_line(0)) == NULL)
    return (0);
  if ((errors_about_matches(nb_matches, tab, my_atoi(line) - 1)) == -1)
    return (display_aff_status(tab));
  my_putstr("Player removed ");
  my_putstr(nb_matches);
  my_putstr(" match(es) from line ");
  my_putstr(line);
  if (player(my_atoi(line), my_atoi(nb_matches), tab) == 1)
    return (0);
  return (first_aff(tab));
}

int	first_aff(int *tab)
{
  char	*line;
  char	*nb_matches;

  my_putchar('\n');
  my_putstr("Your turn:\n");
  my_putstr("Line: ");
  if ((line = get_next_line(0)) == NULL)
    return (0);
  if ((errors_about_lines(my_atoi(line), tab, line)) == -1)
    return (display_aff_status(tab));
  my_putstr("Matches: ");
  if ((nb_matches = get_next_line(0)) == NULL)
    return (0);
  if ((errors_about_matches(nb_matches, tab, my_atoi(line) - 1)) == -1)
    return (display_aff_status(tab));
  else
    {
      my_putstr("Player removed ");
      my_putstr(nb_matches);
      my_putstr(" match(es) from line ");
      my_putstr(line);
      if (player(my_atoi(line), my_atoi(nb_matches), tab) == 1)
	return (0);
      return (first_aff(tab));
    }
}

int	tab()
{
  int	tab[4];

  tab[0] = 1;
  tab[1] = 3;
  tab[2] = 5;
  tab[3] = 7;
  aff_tab();
  return (first_aff(tab));
}

int	main(int argc, char **argv)
{
  tab();
}
