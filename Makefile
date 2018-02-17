##
## Makefile for Makefile in /home/wargni_y/TEK1/UNIX/PSU_2015_minitalk
##
## Made by Yoann Wargnier
## Login   <wargni_y@epitech.net>
##
## Started on  Sat Jul 16 21:30:46 2016 Yoann Wargnier
## Last update Wed Jul 20 20:15:32 2016 Yoann Wargnier
##

CC		= gcc

RM		= rm -rf

CFLAGS		+= -I./include -W -Wall -Wextra -Werror

NAME		= client/client

NAME2		= server/server

SRCS		= src/client.c \
		src/my_atoi.c

SRCS2		= src/server.c \
		src/tools.c

OBJS		= $(SRCS:.c=.o)

OBJS2		= $(SRCS2:.c=.o)

all:		$(NAME) $(NAME2)

$(NAME):	$(OBJS)
		mkdir -p client
		$(CC) $(OBJS) -o $(NAME)


$(NAME2):	$(OBJS2)
		mkdir -p server
		$(CC) $(OBJS2) -o $(NAME2)

clean:
		$(RM) $(OBJS) $(OBJS2)
		$(RM) client server

fclean:		clean
		$(RM) $(NAME) $(NAME2)

re:		fclean all

.PHONY:		all clean fclean re
