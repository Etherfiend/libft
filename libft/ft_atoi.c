/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muokcan <muokcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 18:01:28 by muokcan           #+#    #+#             */
/*   Updated: 2024/10/18 18:03:21 by muokcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

int	ft_atoi(const char *nptr)
{
	long	result;
	register int		i;
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
	if((result * sign) >= INT_MIN && (result * sign) <= INT_MAX)
		return ((int)result * sign);
	return (0);
}
