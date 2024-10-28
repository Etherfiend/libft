/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muokcan <muokcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:09:38 by muokcan           #+#    #+#             */
/*   Updated: 2024/10/25 16:09:38 by muokcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stddef.h"
#include "stdlib.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	register int i;

	char *result = malloc((len - start) * sizeof(char));
	i = 0;
	while(i < len)
	{
		result[i] = s[start];
		start++;
		i++;
	}
	return (result);
}

#include <stdio.h>

int main()
{
	printf("%s", ft_substr("arifokcan", 2, 4));
}
