NAME        = push_swap
BONUS		= checker
LIBFT       = libft/libft.a
CC          = cc
CFLAGS      = -Wall -Wextra -Werror -MMD -MP -g3
BUILDDIR    = build

C_FILES      = main.c \
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

O_FILES     = $(C_FILES:%.c=$(BUILDDIR)/%.o)

BONUS_C_FILES = checker_bonus/checker_bonus.c \
	checker_bonus/parsing_bonus/parsing_bonus.c \
	checker_bonus/parsing_bonus/parsing_utils_bonus.c \
	checker_bonus/parsing_bonus/parsing_utils_two_bonus.c \
	checker_bonus/action_bonus/pa_bonus.c \
	checker_bonus/action_bonus/pb_bonus.c \
	checker_bonus/action_bonus/ra_bonus.c \
	checker_bonus/action_bonus/rb_bonus.c \
	checker_bonus/action_bonus/rr_bonus.c \
	checker_bonus/action_bonus/rra_bonus.c \
	checker_bonus/action_bonus/rrb_bonus.c \
	checker_bonus/action_bonus/rrr_bonus.c \
	checker_bonus/action_bonus/sa_bonus.c \
	checker_bonus/action_bonus/sb_bonus.c \
	checker_bonus/action_bonus/ss_bonus.c \
	checker_bonus/utils_bonus/utils_bonus.c \
	checker_bonus/utils_bonus/utils_bonus_two.c \
	checker_bonus/gnl_bonus/get_next_line.c \
	checker_bonus/gnl_bonus/get_next_line_utils.c \

BONUS_O_FILES = $(BONUS_C_FILES:%.c=$(BUILDDIR)/%.o)
DEPS        = $(O_FILES:%.o=%.d) $(BONUS_O_FILES:.o=.d)

all: $(NAME)

bonus: $(BONUS)

$(BONUS): $(BONUS_O_FILES) $(LIBFT)
	$(CC) $(CFLAGS) -o $@ $(BONUS_O_FILES) -Llibft -lft

$(NAME): $(O_FILES) $(LIBFT)
	$(CC) $(CFLAGS) -o $@ $(O_FILES) -Llibft -lft

$(LIBFT): libft
	$(MAKE) -C libft/

$(BUILDDIR)/%.o: %.c
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(BUILDDIR)
	make -C libft/ clean

fclean:
	rm -rf $(BUILDDIR)
	rm -rf $(NAME)
	rm -rf $(BONUS)
	make -C libft/ fclean

re: fclean all

.PHONY: all clean fclean re libft bonus

-include $(DEPS)