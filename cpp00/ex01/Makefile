# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cwastche <cwastche@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/29 11:46:51 by cwastche          #+#    #+#              #
#    Updated: 2022/07/08 15:01:18 by cwastche         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#COLORS
BRed	=	'\033[1;31m'
BGreen	=	'\033[1;32m'	
NC		=	'\033[0m'

NAME	=	PhoneBook
I		=	incs/
S		=	srcs/
O		=	objs/
SRCS	=	main.cpp \
			PhoneBook.cpp \
			Contact.cpp
SRCS	:=	$(foreach file, $(SRCS), $S$(file))
OBJS	=	$(SRCS:$S%=$O%.o)
CFLAGS	=	-Wall -Wextra -Werror -std=c++98 
CFLAGS	+=	-I$(I)
CC		=	c++
RM		=	rm -rf
LOG		=	@echo -e

all	:	$(NAME)

$O	:
			@mkdir $@

$(OBJS):	| $O
$(OBJS):	$O%.o: $S%
			$(LOG) $(BRed)"Compiling $^: "
			@$(CC) $(CFLAGS) -c $< -o $@
			$(LOG) $(BGreen)"✓"

$(NAME):	$(OBJS)
			@$(CC) $^ -o $@

clean	:	
			$(LOG) $(BRed)"Cleaning up objects..."
			@$(RM) $O
			$(LOG) $(BGreen)"✓"

fclean	:	clean
			$(LOG) $(BRed)"Cleaning up executable...!"
			@$(RM) $(NAME)
			$(LOG) $(BGreen)"✓"

re		:	fclean all

run		:	$(NAME)
			./$(NAME)

PHONY	:	all clean fclean re run 

