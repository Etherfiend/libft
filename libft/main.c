#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int	main(int argc, char **argv){
	int c = atoi(argv[1]);
	printf("%d\n", ft_isdigit(c));
	printf("%d\n", ft_isalpha(c));
	printf("%d\n", ft_isalnum(c));
	printf("%d\n", ft_isascii(c));
	printf("%lu\n", ft_strlen("arif"));
}
