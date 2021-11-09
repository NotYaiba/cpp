SRCS =	main.cpp \
		Fixed.cpp



NAME = Fixed

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
