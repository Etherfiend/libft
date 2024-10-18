/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muokcan <muokcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 18:01:59 by muokcan           #+#    #+#             */
/*   Updated: 2024/10/18 18:03:06 by muokcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
	while(*s)
		ft_putchar_fd(*s++, fd);
}

#include <fcntl.h>

int	main(int argc, char **argv)
{
	int fd = open(argv[1], O_RDONLY, 777);
	ft_putstr_fd(fd);
}
