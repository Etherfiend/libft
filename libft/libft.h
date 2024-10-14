/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muokcan <muokcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:58:00 by muokcan           #+#    #+#             */
/*   Updated: 2024/10/09 17:18:19 by muokcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
void 	*ft_memset(void *b, int c, size_t len);
size_t	ft_strlen(const char *c);
void	ft_bzero(void *s, size_t n);
void 	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void 	*memmove(void *dst, const void *src, size_t len);

#endif
