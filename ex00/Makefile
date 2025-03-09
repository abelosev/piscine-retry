NAME = rush-02

CC = cc

CFLAGS = -Wall -Werror -Wextra -I.

SRCS = ft_atoi.c \
		main.c \
		print.c \
		ft_readline.c \
		ft_strdup.c \
		ft_separate.c \
		free.c \
		struct.c

OBJ = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $@

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean : $(OBJ)
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)