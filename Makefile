NAME := libftprintf.a

SRCS := \
		ft_printf \
		ft_switch \
		ft_putchar \
		ft_print_char \
		ft_putstr \
		ft_print_str \
		ft_itoa_base \
		ft_print_ptr \
		ft_print_dec_int \
		ft_print_u_int \
		ft_print_hex \

SRCS := $(SRCS:=.c)

OBJS := $(SRCS:.c=.o)

CFLAGS := -Wall -Wextra -Werror

LIBFT := ./libft/libft.a

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT)
	ar rcs $(NAME) $(OBJS)

$(LIBFT):
	@$(MAKE) -C ./libft > /dev/null
	@cp $(LIBFT) $(NAME)

%.o: %.c
	cc $(CFLAGS) -c $< -o $@

clean:
	@$(MAKE) clean -C ./libft > /dev/null
	rm -f $(OBJS)

fclean: clean
	@$(MAKE) fclean -C ./libft > /dev/null
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
