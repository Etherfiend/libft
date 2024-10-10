/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muokcan <muokcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 15:18:37 by muokcan           #+#    #+#             */
/*   Updated: 2024/10/10 16:19:56 by muokcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i;
	char *to = dst;
	const char *from = src;
	

	if(to == from | len == 0)
		return (dst);


	if(to < from)
	{
		i = 0;
		while(len--)
		{
			
		}
	}

	if(to > from)
	{
		while(len > 0)
		{ 
		}
	}
	return(to);
}