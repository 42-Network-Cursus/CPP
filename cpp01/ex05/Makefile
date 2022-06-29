# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cwastche <cwastche@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/29 13:18:52 by cwastche          #+#    #+#              #
#    Updated: 2022/06/29 13:19:00 by cwastche         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	ex05
SRCS	=	main.cpp Harl.cpp
OBJS	=	$(SRCS:.cpp=.o)
FLAGS	=	-Wall -Wextra -Werror -std=c++98
CC		=	c++
RM		=	rm -rf

all	: $(NAME)

$(NAME)	:	$(OBJS)
			$(CC) $(FLAGS) -o $(NAME) $(OBJS)

clean	:	
			$(RM) $(OBJS)

fclean	:	clean
			$(RM) $(NAME)

re		:	fclean all

PHONY	:	all fclean 