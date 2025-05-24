CC = cc
CFLAGS = -Wall -Wextra -Werror #-I./libft

SRCS:= $(wildcard *.c)
OBJS:= $(SRCS:%.c=%.o)

NAME = libftprintf.a
LIBFTNAME = libft.a

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

PRINTFSRCS:= parser.c libft/ft_substr.c \
			libft/ft_strchr.c libft/ft_strlen.c \
			libft/ft_isalpha.c libft/ft_putnbr_fd.c \
			libft/ft_putchar_fd.c libft/ft_putstr_fd.c \
			libft/ft_calloc.c libft/ft_bzero.c hexadecimal.c

PRINTFOBJS:= $(SRCS:%.c=%.o)

ft_printf:
	$(CC) $(CFLAGS) -o ft_printf $(PRINTFSRCS)
	./ft_printf && rm -f *.o ft_printf

$(NAME): $(OBJS) $(LIBFTNAME)
	ar -x $(LIBFTNAME)
	ar rcs $(NAME) $(OBJS) *.o

$(LIBFTNAME):
	$(MAKE) all -C ./libft
	cp ./libft/libft.a $(LIBFTNAME)

all: $(NAME)

clean:
	$(MAKE) clean -C ./libft
	rm -f $(OBJS) *.o

fclean: clean
	$(MAKE) fclean -C ./libft
	rm -f $(NAME) $(LIBFTNAME)

re: clean fclean all

.PHONY: all clean fclean re

