CPP = g++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = Harl.cpp main.cpp
OBJS = $(SRCS:.cpp=.o)
NAME = Harl

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(CPPFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CPP) $(CPPFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

leaks:
	leaks --atExit --q -- ./$(NAME)

re: fclean all

.PHONY: all clean fclean re leaks
