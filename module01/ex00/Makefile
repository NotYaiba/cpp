SRCS = main.cpp \
		Zombie.cpp\
		newZombie.cpp\
		randomChump.cpp\

NAME = zombie

all : $(NAME)

$(NAME) : $(SRCS)
		@g++  ${SRCS}  -o$(NAME) 

FLAGS = -Wall -Wextra -Werror

clean :
		@rm -f ${NAME}

fclean : clean
		@rm -f $(NAME)

re : fclean
		make all
