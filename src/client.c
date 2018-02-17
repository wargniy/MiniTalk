/*
** client.c for client in /home/wargni_y/TEK1/UNIX/PSU_2015_minitalk/clientd
**
** Made by Yoann Wargnier
** Login   <wargni_y@epitech.net>
**
** Started on  Tue Jul 19 15:43:06 2016 Yoann Wargnier
** Last update Sun Aug  7 15:29:19 2016 Yoann Wargnier
*/

#include <signal.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include "minitalk.h"

void		bit_to_bit(int pid, char c)
{
  int		j;

  j = 7;
  while (j >= 0)
    {
      usleep(900);
      if ((((1 << j)& c) >> j) == 0)
	{
	  if (kill(pid, SIGUSR1) == -1)
	    return ;
	}
	else
	  {
	    if (kill(pid, SIGUSR2) == -1)
	      return ;
	  }
      j -= 1;
    }
}

void		run(int pid, char *str)
{
  int		i;

  i = 0;
  while (str[i] != '\0')
    {
      bit_to_bit(pid, str[i]);
      i += 1;
    }
}

int		main(int ac, char **av)
{
  int		pid;

  if (ac > 2)
    {
      pid = my_atoi(av[1]);
      run(pid, av[2]);
    }
  return (0);
}
