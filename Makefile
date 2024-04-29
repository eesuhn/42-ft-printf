NAME := libftprintf.a

SRCS := \

SRCS := $(SRCS:=.c)

OBJS := $(SRCS:.c=.o)

CFLAGS := -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT)
	ar rcs $(NAME) $(OBJS)

$(LIBFT):
	$(MAKE) bonus -C ./libft
	cp ./libft/libft.a $(NAME)

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
