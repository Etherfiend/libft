/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muokcan <muokcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:09:22 by muokcan           #+#    #+#             */
/*   Updated: 2024/10/25 16:09:22 by muokcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	getlen(int n)
{
	register int i;

	i = 0;
	while(n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char *ft_itoa(int n)
{
	char			*res;
	char			first;
	unsigned int	digit;
	register int	i;

	digit = getlen(n);
	res = malloc(sizeof(char) * (digit + 1));
	if(res == NULL)
		return (NULL);
}

#include <stdio.h>

int main()
{
	printf("%s", ft_itoa(-123));
}
