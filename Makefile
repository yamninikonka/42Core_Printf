NAME = libftprintf.a
SCRS = $(wildcard *.c)
CFLAGS = -Wall -Werror -Wextra
OBJ = $(SCRS:.c=.o)
LIBFT_DIR = ./libft
LIBFT = $(LIBFT_DIR)/libft.a

all: $(LIBFT) $(NAME)

%.o: %.c
	@cc $(CFLAGS) -c $< -o $@

$(LIBFT):
	@make -C $(LIBFT_DIR)
	

$(NAME): $(OBJ) $(LIBFT)
	@cp $(LIBFT) $(NAME)
	ar rcs $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	@rm -f $(OBJ)
	@make -C $(LIBFT_DIR) clean
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)
	@make -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re
