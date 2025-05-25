# CC = cc
# CFLAGS = -Wall -Wextra -Werror #-I./libft

# SRCS:= $(wildcard *.c)
# OBJS:= $(SRCS:%.c=%.o)

# NAME = libftprintf.a
# LIBFTNAME = libft.a

# %.o: %.c
# 	$(CC) $(CFLAGS) -c $< -o $@

# $(NAME): $(OBJS) $(LIBFTNAME)
# 	ar -x $(LIBFTNAME)
# 	ar rcs $(NAME) $(OBJS) *.o

# $(LIBFTNAME):
# 	$(MAKE) all -C ./libft
# 	cp ./libft/libft.a $(LIBFTNAME)

# all: $(NAME)

# clean:
# 	$(MAKE) clean -C ./libft
# 	rm -f $(OBJS) *.o

# fclean: clean
# 	$(MAKE) fclean -C ./libft
# 	rm -f $(NAME) $(LIBFTNAME)

# re: clean fclean all

# .PHONY: all clean fclean re

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

run: $(NAME)
	@cc $(CFLAGS) $(OBJ) $(LIBFT) -o main
	./main

.PHONY: all clean fclean re