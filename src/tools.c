/*
** tools.c for tools in /home/wargni_y/TEK1/UNIX/PSU_2015_minitalk/serverd
**
** Made by Yoann Wargnier
** Login   <wargni_y@epitech.net>
**
** Started on  Tue Jul 19 15:55:47 2016 Yoann Wargnier
** Last update Wed Jul 20 18:17:07 2016 Yoann Wargnier
*/

#include <unistd.h>
#include "minitalk.h"

void		my_putchar(char c)
{
  write(1, &c, 1);
}

int		my_putnbr(int nb)
{
  if (nb > 9)
    my_putnbr(nb / 10);
  my_putchar((nb % 10) + 48);
  return (nb);
}
