NAME        = push_swap
CC          = cc
CFLAGS      = -Wall -Wextra -Werror -MMD -MP
BUILDDIR    = build

# Your source files
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
              sort/buble.c \
              utils/swap.c \
              utils/ft_putstr.c

O_FILE      = $(C_FILE:%.c=$(BUILDDIR)/%.o)

DEPS        = $(O_FILE:%.o=%.d)

all: $(NAME)

$(NAME): $(O_FILE)
	make -C libft/
	$(CC) $(CFLAGS) -o $@ $(O_FILE) -Llibft -lft

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

.PHONY: all clean fclean re 

-include $(DEPS)