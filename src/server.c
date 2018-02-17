/*
** server.c for server in /home/wargni_y/TEK1/UNIX/PSU_2015_minitalk/serverd
**
** Made by Yoann Wargnier
** Login   <wargni_y@epitech.net>
**
** Started on  Tue Jul 19 15:58:50 2016 Yoann Wargnier
** Last update Thu Jul 21 19:49:49 2016 Yoann Wargnier
*/

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <signal.h>
#include <sys/types.h>
#include "minitalk.h"

int		g_sig = 0;

void			recover_char()
{
  unsigned char		c;
  int			i;

  i = 7;
  c = 0;
  while (i >= 0)
    {
      pause();
      c = c + (g_sig << i);
      i -= 1;
    }
   my_putchar(c);
   c = '\0';
}

void		is_zero()
{
  g_sig = 0;
}

void		is_one()
{
  g_sig = 1;
}

int		main()
{
  int		pid;

  pid = getpid();
  my_putnbr(pid);
  write(1, "\n", 1);
  while (42)
    {
      if (signal(SIGUSR2, is_one) == SIG_ERR)
	return (1);
      if (signal(SIGUSR1, is_zero) == SIG_ERR)
	return (1);
      recover_char();
    }
  return (0);
}
