# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/13 13:36:35 by bprovolo          #+#    #+#              #
#    Updated: 2022/03/14 20:57:25 by bprovolo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	main.cpp ClapTrap.cpp ScavTrap.cpp

OBJS	=	$(SRCS:.cpp=.o)

NAME	=	scavTrap

CFLAGS	=	-Wall -Wextra -Werror

CC		=	clang++

INCL	=	ClapTrap.hpp ScavTrap.hpp

STD		=	-std=c++98

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(STD) $(OBJS) $(CFLAGS) -o $(NAME)

%.o: %.cpp	$(INCL)
			$(CC) $(STD) $(CFLAGS) -c $< -o $@

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
