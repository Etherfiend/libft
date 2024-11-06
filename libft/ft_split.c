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

static unsigned int	word_len(char *s, char c)
{
	unsigned int	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

static unsigned int	word_counter(char *s, char c)
{
	unsigned int	is_word;
	unsigned int	word_count;

	word_count = 0;
	is_word = 0;
	while (*s)
	{
		if (*s != c && is_word == 0)
		{
			is_word = 1;
			word_count++;
		}
		else if (*s != c)
			is_word = 0;
		s++;
	}
	return (word_count);
}

static char *get_word(char **s, char c)
{
	unsigned int	len;
	unsigned int	i;
	unsigned int	j;

	while (s[j][i] && s[j][i] == c)
		s[j][i]++;
	len = word_len(*s, c);
}
