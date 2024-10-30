/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muokcan <muokcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:25:18 by muokcan           #+#    #+#             */
/*   Updated: 2024/10/25 12:25:18 by muokcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*callocated;

	if (nmemb == 0 || size == 0 || size > (size_t)-1)
		return (NULL);
	callocated = malloc(nmemb * size);
	if (callocated == NULL)
		return (NULL);
	ft_bzero(callocated, size * nmemb);
	return (callocated);
}
