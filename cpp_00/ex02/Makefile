# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: youngpar <youngseo321@gmail.com>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/28 00:03:10 by youngpar          #+#    #+#              #
#    Updated: 2022/06/03 20:12:17 by youngpar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= tester

CXX			= c++
CXXFLAGS	= -std=c++98 -Wall -Wextra -Werror
INC			= .
SRCS		= tests.cpp \
				Account.cpp
OBJS		= $(SRCS:.cpp=.o)

all		: $(NAME)

$(NAME)	: $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean	:
	@rm -rf $(OBJS)

fclean	: clean
	@rm -rf $(NAME)

re		: fclean all

.PHONY : all clean fclean re
