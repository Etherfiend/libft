#include "libft.h"

int	ft_atoi(const char *nptr)
{
	long	result;
	int		i;
	int		sign;

	result = 0;
	sign = 1;
	i = 0;
	while(ft_isspace(nptr[i]))
		i++;
	if(nptr[i] == '-' || nptr[i] == '+')
	{
		if(nptr[i] == '-')
			sign = -sign;
		i++;
	}
	while (nptr[i] && ft_isdigit(nptr[i]))
	{
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	if((result * sign) >= FT_INT_MIN && (result * sign) <= FT_INT_MAX)
		return ((int)result * sign);
	return (0);
}
