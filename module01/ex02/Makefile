SRCS = main.cpp \


NAME = brain

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
