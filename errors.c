/*
** errors.c for errors in /home/gassem_a/Allum1/CPE_2015_Allum1
**
** Made by aurelien gassemann
** Login   <gassem_a@epitech.net>
**
** Started on  Mon Feb 15 11:19:47 2016 aurelien gassemann
** Last update Sun Feb 21 22:48:40 2016 aurelien gassemann
*/

#include "allum1.h"

int	errors_about_lines(int line, int *tab, char *str)
{
  if (letters_for_lines(line, tab, str) == -1)
    return (-1);
  if (line > 4 || line == 0)
    {
      my_putstr("Error: this line is out of range\n");
      my_putstr("Line: ");
      return (-1);
    }
  else if (line < 0)
    {
      my_putstr("Error: invalid input (positive number expected)\n");
      my_putstr("Line: ");
      return (-1);
    }
  else if (check_empty_lines(line, tab) == -1 && line > 0)
    {
      my_putstr("This line is empty\n");
      my_putstr("Line: ");
      return (-1);
    }
  return (0);
}

int	errors_about_matches(char *nb_matches, int *tab, int line)
{
  int	i;

  i = 0;
  while (nb_matches[i] != 0 || nb_matches[0] == 0)
    if (nb_matches[i] < '0' || nb_matches[i++] > '9')
      {
	my_putstr("Error: invalid input (positive number expected)\n");
	my_putstr("Line: ");
	return (-1);
      }

  if (my_atoi(nb_matches) == 0)
    {
      my_putstr("Error: you have to remove at least one match\n");
      my_putstr("Line: ");
      return (-1);
    }
  else if (my_atoi(nb_matches) > tab[line])
    {
      my_putstr("Error: not enough matches on this line\n");
      my_putstr("Line: ");
      return (-1);
    }
  return (0);
}

int	letters_for_matches(char *nb_matches, int *tab, int line, char *str)
{
  int	i;

  i = 0;
  while (str[i] != 0 || str[0] == 0)
    if (str[i] < '0' || str[i++] > '9')
      {
	my_putstr("Error: invalid input (positive number expected)\n");
	my_putstr("Line: ");
	return (-1);
      }
}

int	letters_for_lines(int line, int *tab, char *str)
{
  int	i;

  i = 0;
  while (str[i] != 0 || str[0] == 0)
    if (str[i] < '0' || str[i++] > '9')
      {
	my_putstr("Error: invalid input (positive number expected)\n");
	my_putstr("Line: ");
	return (-1);
      }
}

int	check_empty_lines(int line, int *tab)
{
  int	i;

  i = 0;
  if (tab[line - 1] == 0)
    return (-1);
}
