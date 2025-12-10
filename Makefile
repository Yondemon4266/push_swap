NAME = push_swap
CFLAGS  = -Wall -Wextra -Werror -MMD -MP
BUILDDIR = build

C_FILE = main.c \
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
		 sort/insertionc \

O_FILE	= $(C_FILE:.c=$(BUILDDIR)/%.o)
D_FILE = $(O_FILE:.o=.d)


all : $(NAME)

$(NAME): $(O_FILE)
	$(CC) $(CFLAGS) -o $@ $(O_FILE)

clean:
	$(RM) -r $(BUILDDIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re 

-include $(DEPS)