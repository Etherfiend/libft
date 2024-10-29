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
#include <limits.h>

static int	getlen(int n)
{
	register int	i;

	i = 0;
	if(n == INT_MIN)
		return (11);
	if (n < 0)
	{
		i++;
		n = -n;
	}
	else if (n == 0)
		return (1);
	if (n > 0)
	{
		while (n != 0)
		{
			n = n / 10;
			i++;
		}
	}
	return (i);
}

static char	*write_digits(char *wd, int number, int gl_digit)
{
	if (number == INT_MIN)
	{
		wd[0] = '-';
		wd[1] = '2';
		number = 147483648;
	}
	else if (number < 0)
	{
		wd[0] = '-';
		number = -number;
	}
	if (number == 0)
	{
		wd[0] = '0';
		return (wd);
	}
	while (number != 0)
	{
		wd[gl_digit--] = (number % 10) + '0';
		number = number / 10;
	}
	return (wd);
}

char	*ft_itoa(int n)
{
	char			*res;
	unsigned int	digit;

	digit = getlen(n);
	res = malloc(sizeof(char) * (digit + 1));
	if (res == NULL)
		return (NULL);
	res[digit--] = '\0';
	return (write_digits(res, n, digit));
}

#include <stdio.h>

int main() {
    printf("%s\n", ft_itoa(INT_MIN)); // "-2147483648" bekleniyor
    printf("%s\n", ft_itoa(-123));     // "-123" bekleniyor
    printf("%s\n", ft_itoa(0));        // "0" bekleniyor
    printf("%s\n", ft_itoa(456));      // "456" bekleniyor
    printf("%s\n", ft_itoa(123456));   // "123456" bekleniyor
    return 0;
}
