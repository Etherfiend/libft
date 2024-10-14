NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
CC = gcc
SRCS = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
	   ft_memchr.c ft_memcpm.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strrchr.c \
	   ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c
OBJ = $(SRCS:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

$(OBJ): $(SRCS)
	$(CC) $(CFLAGS) $(SRCS)

clean:
	rm -f $(OBJ)

fclean: clean
	rf -f $(NAME)

re: fclean all
