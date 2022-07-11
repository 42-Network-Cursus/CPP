# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cwastche <cwastche@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/29 14:38:33 by cwastche          #+#    #+#              #
#    Updated: 2022/07/08 15:51:15 by cwastche         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	ClapTrap
SRCS	=	main.cpp ClapTrap.cpp
#COLORS
BRed	=	'\033[1;31m'
BGreen	=	'\033[1;32m'	
NC		=	'\033[0m'

NAME	=	ClapTrap
I		=	incs/
S		=	srcs/
O		=	objs/
SRCS	=	main.cpp \
			ClapTrap.cpp
SRCS	:=	$(foreach file, $(SRCS), $S$(file))
OBJS	=	$(SRCS:$S%=$O%.o)
CFLAGS	=	-Wall -Wextra -Werror -std=c++98 
CFLAGS	+=	-I$(I)
CC		=	c++
RM		=	rm -rf

all	:	$(NAME)

$O	:
			@mkdir $@

$(OBJS):	| $O
$(OBJS):	$O%.o: $S%
			@echo $(BRed)"Compiling $^: "
			@$(CC) $(CFLAGS) -c $< -o $@
			@echo $(BGreen)"✓"

$(NAME):	$(OBJS)
			@$(CC) $^ -o $@

clean	:	
			@echo $(BRed)"Cleaning up objects..."
			@$(RM) $O
			@echo $(BGreen)"✓"

fclean	:	clean
			@echo $(BRed)"Cleaning up executable...!"
			@$(RM) $(NAME)
			@echo $(BGreen)"✓"

re		:	fclean all

run		:	$(NAME)
			./$(NAME)

PHONY	:	all clean fclean re run 