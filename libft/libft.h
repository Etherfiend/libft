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

# define FT_INT_MIN -2147483648
# define FT_INT_MAX 2147483647
# define SPACE 32

int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_atoi(const char *nptr);
int		ft_isspace(int c);
int		ft_isalnum(int c);
int		ft_isprint(int c);
char	*ft_strchr(const char *s, int c);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
void 	*ft_memset(void *b, int c, size_t len);
size_t	ft_strlen(const char *c);
void	ft_bzero(void *s, size_t n);
void 	*ft_memcpy(void *dst, const void *src, size_t n);
//void 	*ft_memmove(void *dst, const void *src, size_t len);

#endif
