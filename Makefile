NAME = minitalk
BINARY = client server

CCFLAGS = -Wall -Werror -Wextra -g

INCLUDES_PATH = include
LIBFT = ./libft/libft.a

SRCS = ./srcs/client.c ./srcs/server.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

%.o: %.c
	@$(CC) $(CCFLAGS) -I $(INCLUDES_PATH) -c $< -o $@

$(NAME): $(BINARY)

$(LIBFT):
	@make -C libft

client: srcs/client.o $(LIBFT)
	@$(CC) $(CCFLAGS) ./srcs/client.o -I $(INCLUDES_PATH) $(LIBFT) -o $@

server: srcs/server.o $(LIBFT)
	@$(CC) $(CCFLAGS) ./srcs/server.o -I $(INCLUDES_PATH) $(LIBFT) -o $@

clean:
	@rm -f $(OBJS)
	@make -C libft clean

fclean: clean
	@rm -f $(BINARY)
	@make -C libft fclean

re: fclean all

.PHONY: all clean fclean re
