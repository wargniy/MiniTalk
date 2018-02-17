/*
** my_atoi.c for my_atoi.c in /home/wargni_y/TEK1/UNIX/PSU_2015_minitalk/clientd
**
** Made by Yoann Wargnier
** Login   <wargni_y@epitech.net>
**
** Started on  Tue Jul 19 15:40:58 2016 Yoann Wargnier
** Last update Wed Jul 20 18:17:37 2016 Yoann Wargnier
*/

#include "minitalk.h"

int		my_atoi(char *str)
{
  int		i[3];

  i[0] = 0;
  i[1] = 1;
  i[2] = 0;
  while (str[i[2]] == '+' || str[i[2]] == '-')
    i[2] += 1;
  if (str[i[2]] == '-')
    {
      i[1] = -1;
      i[2] += 1;
    }
  while (str[i[2]] >= '1' && str[i[2]] <= '9'&& str[i[2]])
    {
      i[0] = i[0] * 10 + str[i[2]] - '0';
      i[2] += 1;
    }
  return (i[0]);
}
