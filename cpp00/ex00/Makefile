# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cwastche <cwastche@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/29 11:45:04 by cwastche          #+#    #+#              #
#    Updated: 2022/07/08 15:01:24 by cwastche         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	Megaphone

FLAGS	= -Wall -Wextra -Werror -std=c++98

CC	=	c++

rm	=	rm -rf

all	: $(NAME)

$(NAME)	:	
			$(CC) $(FLAGS) -o $(NAME) megaphone.cpp

fclean	:
			$(RM) $(NAME)

re		:	fclean all

PHONY	:	all fclean 
