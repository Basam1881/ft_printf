
SRC_NAME = ft_putchar_fd.c\
		ft_putstr_fd.c\
		ft_putnbr_fd.c\
		ft_printf.c\
		ft_putunbr_fd.c\
		ft_putpnbr_fd.c\
		ft_putxnbr_fd.c\
		ft_putxxnbr_fd.c\
		ft_checks.c\
		ft_print_arg.c\
		ft_get_me_arg_len.c\
		ft_strlen.c

OBJ_NAME = $(SRC_NAME:.c=.o) 
CFLAG = -Wall -Wextra -Werror
NAME = libftprintf.a

.PHONY: all clean fclean re

all: ${NAME}

${NAME}: ${OBJ_NAME}
	gcc -c ${CFLAG} ${SRC_NAME}
	ar -rc $(NAME) $(OBJ_NAME)

bonus: ${NAME}

clean:
	rm -rf ${OBJ_NAME}

fclean: clean
	rm -f ${NAME}

re: fclean all