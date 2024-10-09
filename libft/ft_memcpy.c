/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muokcan <muokcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 14:35:33 by muokcan           #+#    #+#             */
/*   Updated: 2024/10/09 18:18:23 by muokcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t i;
	unsigned char *to = (unsigned char *)dst;
	const unsigned char *from = (unsigned char *)src;


	if(!(n > 0 || from > to))
	{
		return ();
	}

	while()
}