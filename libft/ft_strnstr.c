/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muokcan <muokcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 18:02:18 by muokcan           #+#    #+#             */
/*   Updated: 2024/10/18 18:03:01 by muokcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	register int i;
	register int j;

	if (*little == '\0')
		return ((char *)big);
	i = 0;
	while (big && i < len)
	{
		j = 0;
		while( little[j] && big[i + j] == little[j] && (i + j) < len)
		{
			if(little[j] == '\0')
				return ((char *)big + i);
			j++;
		}
		i++;
	}
	return (NULL);
}

#include <stdio.h>
#include <string.h>

int	main()
{
		printf("%s\n", ft_strnstr("arifokcan", "if", 6));
}
