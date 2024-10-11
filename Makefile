# Makefile

NAME = partie

SRCS = main.c \
        board.c \
        character.c \
        verification.c

all:  $(NAME)

$(NAME): $(SRCS)
        gcc $(SRCS) -o $(NAME)

fclean:
        rm -f $(NAME)

re: fclean all
