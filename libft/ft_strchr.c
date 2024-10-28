/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muokcan <muokcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 18:02:01 by muokcan           #+#    #+#             */
/*   Updated: 2024/10/18 18:03:05 by muokcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strchr(const char *s, int c)
{
	register unsigned int	i;

	i = 0;
	while(s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if(c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}

#include <string.h>
#include <stdio.h>

int	main()
{
	printf("%s", ft_strchr("arif", 'x'));
}
