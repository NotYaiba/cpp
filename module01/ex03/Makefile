SRCS = main.cpp \
		Weapon.cpp\
		HumanA.cpp\
		HumanB.cpp\


NAME = weapon

all : $(NAME)

$(NAME) : $(SRCS)
		@clang++  ${SRCS}  -o$(NAME) 

FLAGS = -Wall -Wextra -Werror

clean :
		@rm -f ${NAME}

fclean : clean
		@rm -f $(NAME)

re : fclean
		make all
