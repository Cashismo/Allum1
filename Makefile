##
## Makefile for Makefile in /home/gassem_a/Minishell/minishell1-2017pso-houtin_r/TEST
##
## Made by aurelien gassemann
## Login   <gassem_a@epitech.net>
##
## Started on  Fri Jan 22 16:14:21 2016 aurelien gassemann
## Last update Sun Feb 21 22:58:34 2016 aurelien gassemann
##

NAME	=	allum1

SRC	=	allum1.c \
		player.c \
		fonctions.c \
		errors.c \
		ia.c \
		get_next_line.c \
		my_put_nbr.c \

OBJ	=	$(SRC)

RM	=	rm -f

CC	=	gcc

CFLAGS	+=	-Wextra -Wall -Werror -W

all	:	$(NAME)

$(NAME)	:	$(OBJ)
		cc -o $(NAME) $(OBJ)
		@echo -e -n "\e[1;32m*** Compiled all files ***\e[0m\n"
clean	:
		$(RM) *~
		$(RM) *.o
		$(RM) *#
		@echo -e -n "\e[1;33mDeleted files: \e[0m"
		@echo $(OBJS)

fclean	:	clean
		$(RM) $(NAME)
		@echo -e -n "\e[1;36mDeleted executable file: \e[0m"
		@echo $(NAME)

re	:	fclean all

.PHONY	:	all clean fclean re
