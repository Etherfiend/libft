/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muokcan <muokcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 18:01:52 by muokcan           #+#    #+#             */
/*   Updated: 2024/10/18 18:03:08 by muokcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

#include <fcntl.h>

int	main(int argc, char **argv)
{
	int fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 777);
	char c = argv[1][0];

	if (argc > 1)
		ft_putchar_fd(c, fd);
	close(fd);
}
