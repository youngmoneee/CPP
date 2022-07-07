NAME		= Abstract
CXX			= c++
CXXFLAGS	= -std=c++98 -Wall -Wextra -Werror

SRCS		= main.cpp \
			  Animal.cpp \
			  Dog.cpp \
			  Cat.cpp \
			  Brain.cpp
OBJS		= $(SRCS:.cpp=.o)

all		: $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) -I. -o $(NAME) $(OBJS)

clean	:
	@rm -rf $(OBJS)

fclean	: clean
	@rm -rf $(NAME)

re		: fclean all

.PHONY	: all clean fclean re
