# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cwastche <cwastche@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/29 11:59:05 by cwastche          #+#    #+#              #
#    Updated: 2022/07/12 10:47:10 by cwastche         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	HI_THIS_IS_BRAIN
SRCS	=	main.cpp
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

PHONY	:	all clean fclean re