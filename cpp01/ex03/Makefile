NAME	=	Unnecessary_violence
SRCS	=	main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
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