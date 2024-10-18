/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muokcan <muokcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 14:35:33 by muokcan           #+#    #+#             */
/*   Updated: 2024/10/18 18:03:11 by muokcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t i;
	char *to = dst;
	const char *from = src;

	if(to == from || n == 0)
		return (to);
	
	i = 0;
	while(n--)
	{
		to[i] = from[i];
		i++;
	}
	return (to);
}

#include <stdio.h>

int main()
{
	char arr[] = "helloworld";
	ft_memcpy(arr + 5, arr, 2);
	arr[7] = '\0';
	printf("%s", arr);
}