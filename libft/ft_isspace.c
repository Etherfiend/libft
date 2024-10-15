#include "libft.h"

int	ft_isspace(int c)
{
	if(c == SPACE || (c <= 13 && c >= 9))
		return (1);
	return (0);
}
