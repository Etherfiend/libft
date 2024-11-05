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

static unsigned int	wordlen(char *s, char sep)
{
	unsigned int	i;

	i = 0;
	while (s[i] && s[i] != sep)
		i++;
	return (i);
}

static unsigned int	wordcounter(char *s, char sep)
{
	unsigned int	is_word;
	unsigned int	wordcount;

	is_word = 0;
	wordcount = 0;
	while (*s)
	{
		if (*s != sep && is_word == 0)
		{
			is_word = 1;
			wordcount++;
		}
		else if (*s == sep && is_word == 1)
			is_word = 0;
		s++;
	}
	return (wordcount);
}

char	**ft_split(char const *s, char c)
{
	char			**res;
	unsigned int	i;

	if (!s)
		return (NULL);
	res = malloc(sizeof(char *) * (wordcounter((char *)s, c) + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (i < wordcounter((char *)s, c))
	{
		while (*s == c)
			s++;
		res[i] = malloc(sizeof(char) * (wordlen((char *)s, c) + 1));
		if (!res[i])
		{
			free_alloc(res);
			return (NULL);
		}
		ft_strlcpy(res[i], s, (wordlen((char *)s, c) + 1));
		s += wordlen((char *)s, c);
		i++;
	}
	res[i] = NULL;
	return (res);
}

