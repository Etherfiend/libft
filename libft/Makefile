NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
CC = cc
RM = rm -f
AR = ar -rcs
SRCS = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
	   ft_memchr.c ft_memcpm.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strrchr.c \
	   ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c 

OBJ = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)
	@echo "\033[32m✓ built succesfully\033[0m"

clean:
	@$(RM) $(OBJ)
	@echo "\033[31m✓ objects removed\033[0m"

fclean: clean
	@$(RM) $(NAME)
	@echo "\033[31m✓ library removed\033[0m --> $(NAME)"

re: fclean all

.PHONY: all clean fclean re
