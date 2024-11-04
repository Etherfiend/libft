/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muokcan <muokcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:08:56 by muokcan           #+#    #+#             */
/*   Updated: 2024/10/25 16:08:56 by muokcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static void	free_alloc(char **s)
{
	unsigned int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
		free(s[i++]);
	free(s);
}

static int	wordlen(char *s, char sep)
{
	unsigned int	i;
	while (s[i] && s[i] != sep)
		i++;
	return (i);
}

static int	wordcounter(char *s, char sep)
{
	unsigned int	is_word;
	unsigned int	wordcount;

	is_word = 0;
	wordcount = 0;
}
