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

static void	free_alloc(char **s)
{
	register unsigned int	i;

	i = 0;
	if (!s)
		return;
	while (s[i])
	{
		free(s[i]);
		i++;
	}
	free (s);
}

static int	word_count(char const *s, char sep)
{
	register unsigned int	i;
	register unsigned int 	word_count;
	unsigned int 			in_word;

	in_word = 0;
	i = 0;
	while (*s)
	{
		if (*s != sep && !in_word)
		{
			in_word = 1;
			word_count++;
		}
		else if (*s == sep)
			in_word = 0;
		s++;
	}
	return (word_count);
}

static int word_len(char const *s, char sep)
{
	register unsigned int	i;

	i = 0;
	while (*s && *s == sep)
		s++;
	while (s[i] && s[i] != sep)
	{
		i++;
	}
	return (0);
}

char **ft_split(char const *s, char c)
{
	register unsigned int	i;
	register unsigned int	j;
	unsigned int			words;
	char					**res;

	i = 0;
	if (!s)
		return (NULL);
	words = word_count(s, c);
	if (!res)
		return (NULL);
	while (i < words)
	{

	}
}
