NAME	=	ex03
SRCS	=	AMateria.cpp \
			Character.cpp \
			Cure.cpp \
			Ice.cpp \
			main.cpp \
			MateriaSource.cpp
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