/*
** fonctions.c for fonctions in /home/gassem_a/Programmation_Elementaire/CPE_2015_BSQ
**
** Made by aurelien gassemann
** Login   <gassem_a@epitech.net>
**
** Started on  Sun Dec 20 16:41:40 2015 aurelien gassemann
** Last update Sat Feb 20 12:57:08 2016 aurelien gassemann
*/

#include "allum1.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}

int	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != 0)
    {
      my_putchar(str[i]);
      i = i + 1;
    }
}

int	my_atoi(const char *str)
{
  int	i;
  int	j;
  int	idx;

  i = 0;
  j = 0;
  idx = 0;
  if (str[0] == '-')
    {
      idx = 1;
      i = 1;
    }
  while (str[i] != 0)
    {
      if (str[i] >= '0' && str[i] <= '9')
	{
	  j = j * 10;
	  j = j + str[i] - '0';
	}
      i = i + 1;
    }
  if (idx == 1)
    j = j * -j;
  return (j);
}
