NAME = fractol

CC = gcc

FLAGS = -Wall -Wextra -Werror

SRCS = main.c string_utils.c init.c events.c math_utils.c render.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(FLAGS) -o $(NAME) $(SRCS) libmlx.a -Lmlx_linux -Imlx_linux -lXext -lX11 -lm -lz

clean:
	rm -f $(OBJS)

fclean:
	rm -f $(NAME)
