# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bprovolo <bprovolo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/13 13:36:35 by bprovolo          #+#    #+#              #
#    Updated: 2022/03/27 17:08:22 by bprovolo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	main.cpp Bureaucrat.cpp

OBJS	=	$(SRCS:.cpp=.o)

NAME	=	Bureaucrat

CFLAGS	=	-Wall -Wextra -Werror

CC		=	c++

STD		=	-std=c++98

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(STD) $(OBJS) $(CFLAGS) -o $(NAME) 

%.o: %.cpp	
			$(CC) $(STD) $(CFLAGS) -c $< -o $@

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
