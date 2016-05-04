/*
** my_put_nbr.c for put_nbr in /home/gassem_a/fichiers_C
**
** Made by aurelien gassemann
** Login   <gassem_a@epitech.net>
**
** Started on  Mon Nov  9 13:21:35 2015 aurelien gassemann
** Last update Sat Feb 20 12:58:18 2016 aurelien gassemann
*/

#include "allum1.h"

int	my_put_nbr(int nb)
{
  if (nb < 0)
    {
      my_putchar('-');
      nb = nb * (-1);
    }
  if (nb >= 10)
    {
      my_put_nbr(nb / 10);
      my_put_nbr(nb % 10);
    }
  else
    my_putchar(48 + nb);
}
