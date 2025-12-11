LIBC =	ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_strchr.c \
		ft_strdup.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strncmp.c \
		ft_strcmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_tolower.c \
		ft_toupper.c \

ADDITIONAL = ft_itoa.c ft_substr.c ft_strtrim.c ft_strjoin.c ft_split.c \
	ft_striteri.c ft_strmapi.c ft_putchar_fd.c ft_putstr_fd.c \
	ft_putendl_fd.c ft_putnbr_fd.c

BONUS = ft_lstnew_bonus.c ft_lstsize_bonus.c ft_lstadd_back_bonus.c \
	ft_lstadd_front_bonus.c ft_lstlast_bonus.c ft_lstdelone_bonus.c \
	ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

BONUS_DONE = .bonus_done

SRCS = $(LIBC) $(ADDITIONAL)

SRCS_ALL = $(SRCS) $(BONUS)

OBJECTS = $(SRCS:.c=.o)

OBJECTS_ALL = $(SRCS_ALL:.c=.o)

NAME = libft.a

CC = cc

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

bonus: $(BONUS_DONE)

$(BONUS_DONE): $(OBJECTS_ALL)
	ar -rcs $(NAME) $(OBJECTS_ALL)
	touch $(BONUS_DONE)

%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

${NAME}:	${OBJECTS}
		ar -rcs ${NAME} ${OBJECTS}

clean:
	rm -f $(OBJECTS_ALL)
	rm -f $(BONUS_DONE)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
