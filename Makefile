NAME        = push_swap
LIBFT       = libft/libft.a
CC          = cc
CFLAGS      = -Wall -Wextra -Werror -MMD -MP
BUILDDIR    = build

C_FILE      = main.c \
              action/pa.c \
              action/pb.c \
              action/ra.c \
              action/rb.c \
              action/rr.c \
              action/rra.c \
              action/rrb.c \
              action/rrr.c \
              action/sa.c \
              action/sb.c \
              action/ss.c \
              sort/simple.c \
              sort/medium.c \
              sort/complex.c \
              utils/swap.c \
              utils/ft_plus_or_minus.c \
              utils/ft_isspace.c \
              utils/free_str_array.c \
              utils/ft_printf_utils_last.c \
              utils/ft_printf_utils.c \
              utils/ft_printf.c \
              utils/display_bench.c \
              utils/free_stack.c \
              parsing/parsing_utils_two.c \
              parsing/parsing_utils.c \
              parsing/manage_flags.c \
              parsing/parsing.c

O_FILE      = $(C_FILE:%.c=$(BUILDDIR)/%.o)
DEPS        = $(O_FILE:%.o=%.d)

all: $(NAME)

$(NAME): $(O_FILE) $(LIBFT)
	make -C libft/
	$(CC) $(CFLAGS) -o $@ $(O_FILE) -Llibft -lft

$(LIBFT): libft
	$(MAKE) -C libft/

$(BUILDDIR)/%.o: %.c
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) -r $(BUILDDIR)
	make -C libft/ clean

fclean: clean
	$(RM) $(NAME)
	make -C libft/ fclean

re: fclean all

.PHONY: all clean fclean re libft

-include $(DEPS)