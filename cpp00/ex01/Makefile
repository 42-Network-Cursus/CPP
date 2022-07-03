# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cwastche <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/29 11:46:51 by cwastche          #+#    #+#              #
#    Updated: 2022/06/29 11:46:53 by cwastche         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	ex01
SRCS	=	main.cpp PhoneBook.cpp
INCL	=	incl/
OBJS	=	$(SRCS:.cpp=.o)
FLAGS	= -Wall -Wextra -Werror -std=c++98 -I$INCL
CC	=	c++
RM	=	rm -rf

all	: $(NAME)

$(NAME)	:	$(OBJS)
			$(CC) $(FLAGS) -o $(NAME) $(OBJS)

clean	:	
			$(RM) $(OBJS)

fclean	:	clean
			$(RM) $(NAME)

re		:	fclean all

PHONY	:	all fclean 
