/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmahdi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 04:24:30 by kmahdi            #+#    #+#             */
/*   Updated: 2022/06/26 04:32:37 by kmahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n >= 0 && n < 10)
	{
		ft_putchar((n + '0'));
	}
	else if (n < 0)
	{
		ft_putchar('-');
		if (n == -2147483648)
		{
			write (1, "2147483648", 10);
		}
		else
		{
			n = -1 * n;
			ft_putnbr(n);
		}
	}
	else if (n >= 10)
	{
		ft_putnbr (n / 10);
		ft_putnbr (n % 10);
	}
}
