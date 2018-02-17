/*
** minitalk.h for minitalk in /home/wargni_y/TEK1/UNIX/PSU_2015_minitalk/include
**
** Made by Yoann Wargnier
** Login   <wargni_y@epitech.net>
**
** Started on  Wed Jul 20 18:15:30 2016 Yoann Wargnier
** Last update Wed Jul 20 18:19:33 2016 Yoann Wargnier
*/

#ifndef MINITALK_H_
# define MINITALK_H_

void		my_putchar(char c);
int		my_putnbr(int nb);
int		my_atoi(char *str);
void		bit_to_bit(int pid, char c);
void		run(int pid, char *str);
void		recover_char();
void		is_zero();
void		is_one();

#endif /* !MINITALK_H_ */
