NAME = do-op

CC = cc

CFLAGS = -Wall -Werror -Wextra -I.

SRC = ft_atoi.c \
		ft_outils.c \
		main.c \
		operators.c

OBJ = $(SRC:.c = .o)

all : $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean : 
	rm -f $(OBJ)

fclean :
	rm -f $(NAME)

re : fclean all

.PHONY : all fclean clean re
